#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Sorts the entered elements in ascending order. Instead of comparing all elements, 
	it takes the first element as the basis and replaces the smallest one among other elements. 
	After replacing it, it takes the second element and compares it with the smaller of the other elements, 
	without adding the number that replaces the first element, and replaces it again. It goes on like this.
	*/
	int N,i,j,location,temporary;
	
	printf("Please enter how many numbers will be produced:\n");
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
	
	for(i=0;i<N-1;i++)
	{
		location = i;
		for(j=i+1;j<N;j++)
		{
			if(array[location]>array[j])
			{
				location=j;
			}
		}
		if(location!=i)
		{
			temporary = array[i];
			array[i] = array[location];
			array[location] = temporary;
		}
	}
	printf("Sorted Array Elements:\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",array[i]);
	}
	
	return(0);
}
