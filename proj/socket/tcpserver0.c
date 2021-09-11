#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/ip.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define errquit(msg) {perror(msg); exit(EXIT_FAILURE);}

#define MYPORT 35000

int main()
{
    struct sockaddr_in myaddr, peeraddr;
    socklen_t peerlen = sizeof peeraddr;

    int sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if ( sockfd == -1 ) errquit("socket");
    
    int opt = 1;
    setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof opt);

    myaddr.sin_family = AF_INET;
    myaddr.sin_port   = htons(MYPORT);
    myaddr.sin_addr.s_addr = INADDR_ANY; //bind to all my addresses

    if ( bind(sockfd, (struct sockaddr *)&myaddr, sizeof(myaddr)) == -1 )
        errquit("bind");

    //make it a listening socket
    if ( listen(sockfd, 3) == -1 ) errquit("listen");
    
    //wait for connection
    int fd = accept(sockfd, (struct sockaddr *)&peeraddr, &peerlen);

    if ( fd == -1 ) errquit("accept");

    printf("Connected from %s:%d\n", inet_ntoa(peeraddr.sin_addr), ntohs(peeraddr.sin_port));

    char buf[128];
    int  nbytes, n;
    
    for (n = 0; n < 20; n++ ) {
        nbytes = snprintf(buf, 128, "Server sending n = %d\n", n);
        write(fd, buf, nbytes);
        sleep(1);
    }
    close(fd);
}
