/* system0.c  */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv []) 
{
    int retval;

    retval = system("ls -l");

    if ( retval == -1 ) {
        perror("system");
        exit(EXIT_FAILURE);
    } else if ( WIFEXITED(retval) && (WEXITSTATUS(retval) == 0)) { 
        printf("success!\n");
    } else {
        printf("Failed!\n");
    }

    
	return 0;
}
