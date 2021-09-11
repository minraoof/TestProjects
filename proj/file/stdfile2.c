/* stdfile2.c  */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv []) 
{
    char buf[128];
    char name[64];
    int nbytes;

    printf("Please enter your name:");
    fflush(stdout);

    //fgets(name, 64, stdin);
    // printf("Hi %s", name);
    
    nbytes  = read(0, name, 64); //read stdin
    nbytes  = snprintf(buf, 128, "Hello %s", name);
    write(1, buf, nbytes); //write stdout
    
	return 0;
}
