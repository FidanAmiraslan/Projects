#include <stdio.h>
int main()
{
	int n,i,b;
	printf("Num = ");
	scanf("%d",&n);
	b = 0;
	
	if(n == 1)
	{
		printf("number should be greater than 1");
	}
	
	for(i = 2;i<n;i++)
	{
		if (n % i ==0)
		{
			b = 1;
		}
		
	}
	
	if (b == 1)
	{
		printf("Not prime");
	}
	
	else
	{
		printf("Prime");
	}
}
