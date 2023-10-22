#include <stdio.h>

int main()
{
	int size;
	printf("Size of array = ");
	
	scanf("%d",&size);
	if (size == 0)
	{
		printf("size cannot be equal to 0");
		return 0;
	}
	int arr[size];
	
	for (int i = 0; i < size ; i++)
	{
		printf("Element = ");
		scanf("%d",&arr[i]);
	}
	
	for (int m = 0; m < size - 1; m++)
	{
		for (int i = 0 ; i < size - 1 ; i++)
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
	
	printf("Sorted array  = ");
	
	for (int i = 0; i < size ; i++)
	{
		printf("%d ",arr[i]);
	}
}
