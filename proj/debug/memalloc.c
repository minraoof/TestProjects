/*prog1.c */

#include <stdio.h>
#include <stdlib.h>

int gvalue;

int mysub() {
	int subval = 10;
	printf("In mysub, & subval = %p\n0", &subval);
}

int main(int argc, char * argv [])
{
	int x, y;
	printf("&x = %p, &y = %p, &gvaluse = %p \n", &x, &y, &gvalue);
	mysub();
	printf(" press enter to continue!\n");
	fgetc(stdin);
	return 0;
}
