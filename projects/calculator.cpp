#include <stdio.h>
#include <math.h>
int main ()
{

	float a,b,r,z;
	int x,y;
	
	printf("1.Addition  2.Subtraction\n3.Division  4.Multiplication\n5.Power     6.Square Root\n");

	printf("Operation number = ");
	scanf("%d",&x);
	
	
	switch(x)
	{
		case 1:
			printf("Summands = ");
			scanf("%f",&a);
			scanf("%f",&b);
			r = a + b;
			printf("%f",r);
			break;
		
		case 2:
			printf("Minuend = ");
			scanf("%f",&a);
			printf("Subtrahend = ");
			scanf("%f",&b);
			r = a-b;
			printf("%f",r);
			break;
		
		case 3:
			printf("Dividend = ");
			scanf("%f",&a);
			printf("Divisor = ");
			scanf("%f",&b);
			if (b == 0)
			{
				printf("Zero divison error");
			}
			r = a / b;
			printf("%f",r);
			break;
			
		case 4:
			printf("Multipliers = ");
			scanf("%f",&a);
			scanf("%f",&b);
			r = a * b;
			printf("%f",r);
			break;
		
		case 5:
			printf("Base = ");
			scanf("%f",&a);
			printf("Power = ");
			scanf("%f",&b);
			r = pow(a,b);
			printf("%f",r);
			break;
			
			case 6:
			printf("Value = ");
			scanf("%f",&a);
			printf("Nth root = ");
			scanf("%f",&z);
			if (z == 0)
			{
				printf("Zero divison error");
				break;
			}
			y = z;
			z = 1 / z;
			if (y % 2 == 0 && a < 0)
			{
				printf("If nth root is even value cannot be less than 0");
				break;
			}

			r = pow(a,z);
			printf("%f",r);
			break;
	}

}
