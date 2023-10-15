#include <stdio.h>

int main() 
{
    int size;
    printf("Size of array = ");
    scanf("%d", &size);
    int ar[size];
    int unique[size];

    for (int a = 0; a < size; a++)
	{
		printf("Element = ");
        scanf("%d", &ar[a]);
    }

    int index = 0;
    for (int i = 0; i < size; i++) 
	{
        int find = ar[i];
        int count = 0;

        for (int m = 0; m < size; m++) 
		{
            if (find == ar[m]) {
                count++;
            }
        }

        if (count == 1) 
		{
            unique[index] = find;
            index++;
        }
    }

    for (int b = 0; b < index; b++) 
	{
        printf("%d ", unique[b]);
    }

}

