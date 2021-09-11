/* background.c  */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char *argv []) 
{
    pid_t pid = fork();
    if ( pid == 0 ) {
        setsid(); //deassociate from the existing group
        sleep(30); //simulate running something in backgground
    } else if ( pid > 0 ) {
        exit(0); //parent exit
    }
}
