#include <stdio.h>
#include <stdlib.h>
int proc[20], mem[20];
int procsize, memsize;

void firstfit(){
	for (int i = 0; i < procsize; ++i)
	{
		for (int j = 0; j < memsize; ++j)
		{
			if(proc[i]<mem[j]){
				mem[j]-=proc[i];
				j=memsize;
			}
		}
	}
}
void bestfit(){
	int temp[20];
	for (int i = 0; i < memsize; ++i)
	{
		temp[i]=mem[i];
	}

	for (int i = 0; i < procsize; ++i)
	{
		int small = 0;

		int temp[20];
	for (int k = 0; k < memsize; ++k)
	{
		temp[k]=mem[k];

	}
		for (int j = 0; j < memsize; ++j)
		{

			temp[j]-=proc[i];
		}
		for (int j = 0; j < memsize; ++j)
		{

			if(temp[small]<0){
				small++;
			}
			if(temp[j]<temp[small]){
				small = j;
			}

		}
		mem[small]-=proc[i];


	}
}
int main(int argc, char const *argv[])
{
	
	printf("Enter size\n");
	scanf("%d",&procsize);
	printf("\nEnter size\n");
	scanf("%d",&memsize);
	printf("\nEnter processes\n");
	for (int i = 0; i < procsize; ++i)
	{
		scanf("%d",&proc[i]);
	}
	printf("\nEnter memory\n");
	for (int i = 0; i < memsize; ++i)
	{
		scanf("%d",&mem[i]);
	}
	
	bestfit();
	printf("\nProcess\n");
	for (int i = 0; i < procsize; ++i)
	{
		printf("%d\t",proc[i] );
	}
	printf("\nMemory\n");
	for (int i = 0; i < memsize; ++i)
	{
		printf("%d\t",mem[i] );
	}
	return 0;

}