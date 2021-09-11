/* listdir.c  */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

#define errquit(msg) {perror(msg); exit(EXIT_FAILURE);}

int main(int argc, char *argv []) 
{
    const char *dirname = "/etc";
    DIR *mydir = opendir(dirname);
    if (mydir == NULL) errquit(dirname);

    struct dirent *entry;

    while ( entry = readdir(mydir) ) {
        printf("%s/%s\n", dirname, entry->d_name);
    }

	return 0;
}
