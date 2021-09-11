#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>

//in this program, we wait on the keyboard for 10 secs
int main()
{
    struct timeval timeout;
    fd_set myset;

    timeout.tv_sec = 10;
    timeout.tv_usec = 0;
    FD_ZERO(&myset); //zero the set
    FD_SET(0, &myset); //adding standard input to the set

    printf("Please enter something within 10 secs:");
    fflush(stdout);

    int num = select(1, &myset, NULL, NULL, &timeout);

    if ( num == -1 ) {
        perror("select");
        exit(EXIT_FAILURE);
    } else if ( num > 0 ) {
        char buf[128];
         fgets(buf, 128, stdin);
         printf("You entered: %s", buf);
    } else {
        printf("Time out!\n");
    }
}
