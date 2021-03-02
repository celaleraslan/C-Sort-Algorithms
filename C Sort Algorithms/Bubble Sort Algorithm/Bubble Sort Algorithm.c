#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Bubble Sort Algorithm is used to sort the entered numbers. List all the elements by comparing them with each other.
	int N,i,j,temporary;
	
	printf("Please enter how many numbers you want to produced:\n");
	scanf("%d",&N);
	
	int array[N];
	
	//srand(time(0)); //If we want random numbers to be assigned
	for(i=0;i<N;i++)
	{
		scanf("%d",&array[i]);
	//	array[i] = rand()%50;
	}
	printf("Array Elements:\n");
	for(i=0;i<N;i++)
	{
		printf("%3d",array[i]);
	}
	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temporary=array[j];
				array[j]=array[j+1];
				array[j+1]=temporary; 
			}
		}
	}
	printf("\nSorted Array Elements:\n");
	for(i=0;i<N;i++)
	{
		printf("%3d",array[i]);
	}
	return(0);
}
