#include <stdio.h>

int sort(int arr[],int size);

int main()
{
	int size;

	printf("Size of array = ");
	scanf("%d",&size);

	if (size == 0)
	{
		printf("Size cannot equal to 0");
		return 0;
	}
	
	int arr[size];
	
	for (int z = 0; z < size; z++)
	{
		printf("Element = ");
		scanf("%d",&arr[z]);
	}
	
	sort(arr,size);	
	
	printf("Sorted array: ");
	
	for (int z = 0; z < size; z++)
	{
		printf("%d ",arr[z]);
	}
	
	printf("\n");
	
	int r = size - 1 ;
	
	int find,index,flag = 0;
	
	printf("Element you are looking for =  ");
	scanf("%d",&find);
	
	for(int h = 0; h  < size; h++)
	{
		int m = r / 2;
		
		if (find == arr[m])
		{
			index = m + 1;
			flag = 1;
			break;
		}
		else if (find > arr[m])
		{
			r = r + 1;
		}
		
		else
		{
			r = r - 1;
		}	
	}
	if (flag)
	{
		printf("%d is the %d. element of array",find,index);
	}

	else
	{
		printf("Array does not contain %d",find);
	}
}


int sort(int arr[],int size)
{

	for (int m = 0; m < size - 1; m++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			int k = i + 1;
			
			if (arr[i] > arr[k])
			{
				int temp = arr[i];
				arr[i] = arr[k];
				arr[k] = temp;		
			}	
		}
	}
	return arr[size];
}
