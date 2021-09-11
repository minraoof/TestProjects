/* ignore_signal.c  */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

#define errquit(msg) { perror(msg); exit(EXIT_FAILURE);}

int count;


int main(int argc, char *argv []) 
{
    struct sigaction act;
    act.sa_handler = SIG_IGN;
    if ( sigaction(SIGINT, &act, NULL) == -1 ) 
        errquit("SIGINT");

    if(sigaction(SIGKILL, &act, NULL) == -1)
	errquit("SIGKILL");

    printf("SIGINT is ignored\n");
    int n;
    for(n =0 ; n < 20; n++ ) {
        printf("n = %d\n", n);
        sleep(1);
    }
	return 0;
}
