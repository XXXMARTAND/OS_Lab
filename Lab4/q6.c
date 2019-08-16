#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
void main(){

	int fp2 = open("newfile.txt",444);
	int fp = creat("newfile1.txt",444);
	char arr[256];
	read(fp2,arr,strlen(arr));
	puts(arr);
	write(fp,arr,strlen(arr));
	close(fp);
}