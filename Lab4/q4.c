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
		
		sleep(5);
		printf("Child Terminated\n");
		exit(0);
	}
	else
	{
		sleep(10);
		printf("I'm the parent\n");
		exit(0);
	}
}
