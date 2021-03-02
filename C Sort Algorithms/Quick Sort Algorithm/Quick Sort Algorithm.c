#include <stdio.h>
#include <stdlib.h>

void quicksort(int *array,int first,int last)
{
	int temporary,pivot,i,j;
	
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(array[i]<=array[pivot] && i<last)
			{
				i++;
			}
			while(array[j]>array[pivot])
			{
				j--;
			}
			if(i<j)
			{
				temporary=array[i];
				array[i]=array[j];
				array[j]=temporary;
			}
		}
		temporary=array[pivot];
		array[pivot]=array[j];
		array[j]=temporary;
		quicksort(array,first,j-1);
		quicksort(array,j+1,last);
	}
}

int main()
{
	/*Quick Sort Algorithm We select the first of the numbers pivot, and since we select the pivot,
	 we call the next 'i' and the last 'j'. Then, if 'i' is less than the pivot, we increment 'i' by one, 
	 so we move to the next number. Then if 'j' is greater than the pivot, we decrease 'j' by one, so we switch to the number next to 'j'.
	  Of course, if the conditions do not fit, we replace 'i' with 'j'. 
	  We continue like this and when 'i' and 'j' are side by side, we place the pivot on the right side of 'j'. This time, 
	  since the number to the right of the pivot was in the first place, the pivot will be that number and we will perform the operations.
	*/
	int N,i;
	
	printf("How many numbers will be produced:\n");
	scanf("%d",&N);
	
	int array[N];
	
	srand(time(0));
	printf("Array Elements:\n");
	for(i=0;i<N;i++)
	{
		array[i] = rand()%100;
	}
	for(i=0;i<N;i++)
	{
		printf("%d\t",array[i]);
	}
	quicksort(array,0,N-1);
	
	printf("\nSorted Array Elements:\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t",array[i]);
	}
	return(0); 
}
