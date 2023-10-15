#include <stdio.h>
int main()
{
	float gr;
	printf("Grade = ");
	scanf("%f",&gr);
	
	if (gr>=90 && gr<=100)
	{
		printf("A");
	}

	if (gr<90 && gr>=80)
	{
		printf("B");
	}

	if (gr<=79 && gr>70)
	{
		printf("C");
	}
	
	if (gr<=70)
	{
		printf("You did not pass the exam");	
	}
	
	else if (gr<0 or gr>100)
	{
		printf("Grade cant be equal to %f",gr);
	}
	
}
