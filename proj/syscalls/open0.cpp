#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <error.h>
#include <stdio.h>
#include <string.h>


using namespace std;


int main(int argc, char* argv[])
{
	int fd;
	const char* FILENAME = "MYFILE.txt";


	fd = open(FILENAME, O_RDONLY);
	if(fd == -1){
		perror(FILENAME);
		cout << "errorno: " << errno << endl;
		cout << "error message: " << strerror(errno) << endl;
		exit(EXIT_FAILURE);
	}

	cout << "Succed!" << endl;
	return 0;
}
