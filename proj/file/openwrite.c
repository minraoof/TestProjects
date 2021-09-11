/* openwrite.c  */
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
    const char *FILENAME = "MYFILE.txt";
    char buf[128];

    if ( (fd = open(FILENAME, O_WRONLY|O_CREAT|O_TRUNC, 0640)) == -1 ) 
        errquit(FILENAME);

    int n, nbytes;

    for(n = 1; n < 6; n++ ) {
        nbytes = snprintf(buf, 128, "Writing %d\n", n);
        if ( write(fd, buf, nbytes) == -1 ) errquit("write");
    }
    close(fd);
}
