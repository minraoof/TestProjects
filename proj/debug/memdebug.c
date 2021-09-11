/* memdebug.c  */
#include <stdio.h>
#include <stdlib.h>


int gvalue;

int myfunc() 
{
    int fint = 300;
    char *cptr = (char *)malloc(10000000);
    printf("In myfunc address of, cptr = %p, fint = %p\n", cptr, &fint);
    free(cptr);
}

int main(int argc, char *argv []) 
{
    int n;
    int arr[10];
    int *darr = (int *)malloc(5000 *sizeof(int)); //dynamic allocation of int arr

    printf("address of gvalue = %p, darr = %p, arr = %p, n = %p\n", &gvalue, darr, arr, &n);
    myfunc();

    for ( n = 0; n < 5020; n++ ) darr[n] = 0;

    printf("press enter to continue:");
    fgetc(stdin);

    char *block = (char *)malloc(4000000);

    printf("press enter to continue:");
    fgetc(stdin);
    free(block);
    free(darr);
	return 0;
}
