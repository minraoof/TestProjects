/* listdir.c  */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>
#include <string.h>

#define errquit(msg) {perror(msg); exit(EXIT_FAILURE);}

int main(int argc, char *argv []) 
{
    const char *dirname = "/media/minal";
    const char *srcdir = "/home/minal/work/TestLog";
    char targetdir[257] = {0};

    DIR *mydir = opendir(dirname);
    if (mydir == NULL) errquit(dirname);

    struct dirent *entry;

    while ( entry = readdir(mydir) ) {

        printf("%s/%s\n", dirname, entry->d_name);

        if(strstr(entry->d_name, "5AA7-85D0") != NULL)
        {
        	sprintf(targetdir, "%s/%s", dirname, entry->d_name);
        	printf("\ntarget path = %s\n", targetdir);

            execl("/bin/cp", "/bin/cp", "-r", srcdir, targetdir, (char *)NULL);
        }
    }

	return 0;
}
