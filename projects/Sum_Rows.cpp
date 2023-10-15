#include <stdio.h>
int main ()
{
	int matris[3][5];
	int i,j,sum;
	
	for (i = 0;i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d",&matris[i][j]);	
		}
	}
	
	for (i = 0;i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d",matris[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < 3; i++)
	{
		sum = 0;
		
		for (j = 0; j <5 ; j++)
		{
		sum = sum + matris[i][j];	
		}
		printf("Sum = %d\n",sum);
	}
	
}
