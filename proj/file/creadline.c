/* creadline.c  */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv []) 
{
    FILE *file = fopen("/etc/hosts", "r");
    char buf[128];
    int n = 1;

    while ( fgets(buf, 128, file) ) {
        printf("%2d %s", n++, buf);
    }
    fclose(file);
	return 0;
}
