#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
void main(){
	int status;
	pid_t pid;
	pid = fork();
	if(pid == -1)
		printf("\n Error: child not created");
	else if (pid == 0)
	{
		printf("I'm the child\n");
		printf("Child ID: %d \n",getpid());	
		printf("Parent ID: %d \n",getppid());
			
		exit(0);
	}
	else
	{
		wait(&status);
		printf("I'm the parent\n");
		printf("Parent ID: %d \n",getpid());
		printf("Child ID: %d \n",pid);
	}
}