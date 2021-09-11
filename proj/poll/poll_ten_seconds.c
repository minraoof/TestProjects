/* poll_ten_seconds.c  */
#include <stdio.h>
#include <stdlib.h>
#include <poll.h>

int main(int argc, char *argv []) 
{
    struct pollfd pfd[1];
    pfd[0].fd = 0;
    pfd[0].events = POLLIN;

    printf("Please enter something within 10 secs:");
    fflush(stdout);

    int ret = poll(pfd, 1, 10000);
    if ( ret == 0 ) {
        printf("Time out!\n");
    } else if (ret > 0 ) {
        char buf[128];
        fgets(buf, 128, stdin);
        printf("You entered: %s", buf);
    } else {
        perror("poll");
        exit(EXIT_FAILURE);
    }

	return 0;
}
