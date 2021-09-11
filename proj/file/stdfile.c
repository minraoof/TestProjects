/* stdfile.c  */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv []) 
{

    printf("printf hello world\n");
    fprintf(stdout, "fprintf, stdout, hello world\n");
    fprintf(stderr, "fprintf, stderr, hello world\n");
    write(1, "write 1\n", 8);
    write(2, "write 2\n", 8);

	return 0;
}
