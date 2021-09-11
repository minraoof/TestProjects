/* background2.c  */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv []) 
{
    daemon(0, 0); //becomes a daemon ( background)
    sleep(30);
	return 0;
}
