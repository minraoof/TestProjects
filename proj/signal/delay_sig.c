/* delay_sig.c  */
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

#define errquit(msg) {perror(msg); exit(EXIT_FAILURE);}

int main(int argc, char *argv []) 
{
    sigset_t myset;
    sigemptyset(&myset);
    sigaddset(&myset, SIGINT); //add SIGINT to the set we want to mask out temporary

    if ( sigprocmask(SIG_BLOCK, &myset, NULL) == -1 ) 
        errquit("SIGINT");

    printf("Ctrl-C is masked out!\n");

    int n;

    for ( n = 0; n < 10; n++ ) {
        printf("n = %d\n", n);
        sleep(1);
    }

    if ( sigprocmask(SIG_UNBLOCK, &myset, NULL) == -1 ) 
        errquit("SIGINT");

    printf("Ctrl-C is NOT masked out!\n");

	return 0;
}
