#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>



int main(int argc, char *argv [])
{
	pid_t pid, pid1;
	int n;
	pid = fork();
	pid1 = fork();

	if(pid > 0)
	{
		printf("child pid = %d\n", pid);
		for(n = 0; n < 20; n++ ) {
		    printf("Parent, n = %d\n", n);
		    sleep(1);
		 }

		int status;
	 	pid_t wpid;
		
		printf("Parent waiting for chind\n");
		if((wpid = wait(&status)) == -1){
			perror("wait");
		}
		
		if(WIFEXITED(status)){
			printf("Parent: child %d has ended normally, exit value = %d\n", wpid, WEXITSTATUS(status));

		}else{
			printf("Child %d ended abnormally!\n", wpid);
		}
		


	}else if(pid == 0){
		
		for(n = 0; n < 10; n++ ){
			printf("Child, n = %d\n", n);
			sleep(1);
		}
	}else{
		perror("fork error!\n");
	}

	return 0;
}
