#include <stdio.h>
int main()
{
	int i,num1,num2,a,x;
	scanf("%d",&a);
	num1 = 1;
	num2 = 0;
	printf("%d ",num2);
	for(i=1;i<a;i++)
	{
		x = num1 + num2;
		num1 = num2;
		num2 = x;
		printf("%d ",x);
	}
}
