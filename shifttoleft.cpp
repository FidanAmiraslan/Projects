#include <stdio.h>

void get_arr(int arr[],int size);
void print_arr(int arr[], int size);

int main()
{
	int size,shift;
	printf("Enter size of array = ");
	scanf("%d",&size);
	
	int arr[size];
	get_arr(arr,size);
	print_arr(arr,size);
	printf("\n");
	
	printf("Shift = ");
	scanf("%d",&shift);	
	
    
	for (int m = 0; m < shift; m++) 
    {
		for (int i = 0; i < size - 1; i++)   
		{                              
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i + 1] = temp;
		
		}	
	}
	
	printf("Array after shifting left by %d positions:",shift);
	print_arr(arr,size);


}


void get_arr(int arr[],int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("Element of array = ");
		scanf("%d",&arr[i]);
	}
}


void print_arr(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%d ",arr[i]);	
	}
}


