/* mystat.c  */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

#define errquit(msg) { perror(msg); exit(EXIT_FAILURE);}

int main(int argc, char *argv []) 
{
    if ( argc < 2 ) {
        printf("Usage : %s <filename> ... \n", argv[0]);
        exit(0);
    }

    struct stat st;
    int n = 1;
    while ( n < argc ) {
        if ( stat(argv[n], &st) == -1 ) 
            errquit(argv[n]);

        printf("%-20s ### size: %ld ### mod time: %s", argv[n], st.st_size, ctime(&st.st_mtime));
        n++;
    }
	return 0;
}
