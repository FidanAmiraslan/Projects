#include <stdio.h>
int main()
{
	int n,i,num;
	i = 0;
	num = n;
	
	printf("Number = ");
	scanf("%d",&n);	
	num = n;
	while (n > 0)
	{
		n = n / 10;
		i = i + 1;
	}
	
	printf("%d is %d digit number",num,i);
}
