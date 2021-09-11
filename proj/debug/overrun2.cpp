/* overrun.c  */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv []) 
{
    //int *bptr = (int *)malloc(sizeof(int) * 100);
    //int *aptr = (int *)malloc(sizeof(int) * 100);
    int *bptr = new int[100];
    int *aptr = new int[100];

    printf("aptr = %p, bptr = %p,  pid : %d\n", aptr, bptr,  getpid());
    fgetc(stdin);

    int n;
    for ( n = 0; n < 100; n++ ) 
        aptr[n] = 1;

    for ( n = 0; n < 10; n++ ) 
        printf("aptr[%d] = %d\n", n, aptr[n]);
    printf("----\n");

    for ( n = 0; n < 110; n++ )
        bptr[n] = 2;

    for ( n = 0; n < 10; n++ ) 
        printf("aptr[%d] = %d\n", n, aptr[n]);

    //delete [] aptr;
    delete [] bptr;

	return 0;
}
