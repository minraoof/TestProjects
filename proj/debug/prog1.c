/*prog1.c */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv [])
{
	int n = 0;
	int m = 0;
	int x = 0;

	int *nptr = &n + 1;
 	
	while(n < 5){
	 printf("n = %d\n", n);
	 *nptr = 50;
	 printf("x= %d, n = %d, m = %d\n", x, n, m);
	 nptr++;
	 n += 1;
	}
	
	return 0;
}
