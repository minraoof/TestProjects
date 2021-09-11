/* exec0.c  */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

#define errquit(msg) {perror(msg); exit(EXIT_FAILURE);}

int main(int argc, char *argv []) 
{
    pid_t pid;

    if ( (pid = fork()) == -1 ) errquit("fork");

    if ( pid == 0 ) {
        execl("/bin/ls", "ls", "-l", NULL);
        errquit("execl"); //if code reach here, execl had failed
    }

    int status;
    if ( wait(&status) == -1 ) errquit("wait");
    if ( WIFEXITED(status) && (WEXITSTATUS(status) == 0) )
        printf("Success!\n");
    else
        printf("Failed!\n");

}
