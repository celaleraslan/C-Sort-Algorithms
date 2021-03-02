#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*Insertion Sort Algorithm sorts the entered elements from smallest to largest. 
	It compares the second element with the first element, if the second element is smaller than the first element, 
	it is displaced. Then it compares the third element to the second element. 
	If the third element is smaller than the second element, it replaces it, but this time does not replace the fourth element. 
	It compares the first element with the second element that is displaced if the second element is still smaller than the first element.
	*/
	
	int N,i,j,temporary;
	
	printf("Please enter how many numbers will be created:\n");
	scanf("%d",&N);
	
	int array[N];
	
	srand(time(0));
	printf("Array Elements:\n");
	for(i=0;i<N;i++)
	{
		array[i]=rand()%100;
	}
	for(i=0;i<N;i++)
	{
		printf("%d\t",array[i]);
	}
	printf("\n");
	for(i=1;i<N;i++)
	{
		j=i;
		while(j>0 && array[j]<array[j-1])
		{
			temporary=array[j];
			array[j]=array[j-1];
			array[j-1]=temporary;
			
			j--;
		}
	}
	printf("Displaced Array Elements:\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",array[i]);
	}
	
	return(0);
}
