/* openread.c  */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define errquit(msg) { perror(msg); exit(EXIT_FAILURE); }

int main(int argc, char *argv []) 
{
    int fd;
    const char *FILENAME = "/etc/hosts";
    char buf[128];

    if ( (fd = open(FILENAME, O_RDONLY)) == -1 ) 
        errquit(FILENAME);

    int n, nbytes;
    while ( 1 ) {
        nbytes = read(fd, buf, 128);
        if ( nbytes == 0 ) 
            break;
        else if ( nbytes == -1 ) 
            errquit("read");

        write(1, buf, nbytes); //write to standard output
    } 

    close(fd);
}
