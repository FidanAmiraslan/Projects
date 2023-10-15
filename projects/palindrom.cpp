#include <stdio.h>
int main()
{
	int n1,n2,a,num;
	printf("Number = ");
	scanf("%d",&n1);
	n2 = 0;
	num = n1;
	
	while (n1 > 0)
	{
		a = n1 % 10;
		n2 = n2*10 + a;
		n1 = n1 / 10;
	}
	
	if (num == n2)
	{
		printf("Number is palyndrome");
	}
	
	else
	{
		printf("Number is not palyndrome");
	}
	
}
