#include <stdio.h>

int main()
{
	int size;
	printf("How many test scores do you have? ");
	scanf("%d",&size);
	int score[size];
	float average,sum = 0;
	
	for(int i = 0; i < size; i++)
	{
		printf("score = ");
		scanf("%d",&score[i]);
	}
	for(int n = 0; n < size; n++)
	{
		sum = sum + score[n];
	}
	average = sum / size;
	printf("%.1f",average);
	
}
