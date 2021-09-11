/* handle_sig0.c  */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

#define errquit(msg) { perror(msg); exit(EXIT_FAILURE);}

int count;

void myhandler(int signum) {
    printf("Caught signal %d for %d times\n", signum, ++count);
}

int main(int argc, char *argv []) 
{
    struct sigaction act;
    act.sa_handler = myhandler;
    sigemptyset(&act.sa_mask);
    act.sa_flags = SA_RESTART;

    if ( sigaction(SIGINT, &act, NULL) == -1 ) 
        errquit("SIGINT");

    int n;
    for(n =0 ; n < 20; n++ ) {
        printf("n = %d\n", n);
        sleep(1);
    }
	return 0;
}
