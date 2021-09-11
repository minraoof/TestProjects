/* globdir.c  */
#include <stdio.h>
#include <stdlib.h>
#include <glob.h>

int main(int argc, char *argv []) 
{
    glob_t pglob;
    const char * pattern = "/etc/*.conf";

    if ( glob(pattern, GLOB_NOSORT, NULL, &pglob) != 0 ) {
        printf("failed!\n");
    }

    int n;
    for ( n = 0; n < pglob.gl_pathc; n++ ) {
        printf("%s\n", pglob.gl_pathv[n]);
    }
    globfree(&pglob);
	return 0;
}
