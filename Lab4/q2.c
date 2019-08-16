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
		execl("test","test",NULL);
		
		exit(0);
	}
	else
	{
		wait(&status);
		printf("\nI'm the parent");
		printf("\nChild returned %d\n",status);
	}
}