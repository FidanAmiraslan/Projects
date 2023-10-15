#include <stdio.h>
int main() {
    int i;

    for (i = 2; i <= 100; i++) {
        if (i % 15 == 0) 
		{
            printf("FizzBuzz\n");
        } 
		else if (i % 5 == 0) 
		{
            printf("Buzz\n");
        } 
		else if (i % 3 == 0) 
		{
            printf("Fizz\n");
        } 
		else {
            int b = 1; 
            int j;

            for (j = 2; j < i; j++)
			{
                if (i % j == 0) 
				{
                    b = 0; 
                    break;
                }
            }

            if (b) 
			{
                printf("Prime\n");
            } 
        }
    }

    return 0;
}

