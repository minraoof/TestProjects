#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char * argv [])
{
        int *nptr;
	nptr = (int *) 10000;
	printf("pid = %d\n", getpid());
	printf("*nptr = %d\n", *nptr);
        return 0;
}

