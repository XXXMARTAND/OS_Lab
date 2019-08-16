#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
void main(){
	int fp = creat("newfile.txt",444);
	char arr[256];
	gets(arr);
	write(fp,arr,strlen(arr));
	close(fp);
}