#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int calc(char *val){

	printf("The square root of %s is %lf\n", val, sqrt(strtod(val,NULL)));
}


int main(int argc, char * argv [])
{
        calc(argv[1]);
        return 0;
}

