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
		printf("\n I'm the child");
		exit(0);
	}
	else
	{
		wait(&status);
		printf("\nI'm the Parent");
		printf("\n Child returned %d\n",status);
	}
}