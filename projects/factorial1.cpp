#include <stdio.h>
int main()
{
	int a,f,i;
	f = 1;
	scanf("%d",&a);
	for (i=2;i<=a;i++)
	{
		f = f * i;
	}
	printf("%d! = %d",a,f);
	
	return 0;
}
