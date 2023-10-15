#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, D;
    float x1, x2, D_R;
 
    scanf("%d %d %d", &a, &b, &c);
    D = pow(b, 2) - 4*a*c;
    D_R = sqrt(D);

    if (a == 0) 
    {
        printf("a cannot be equal to 0");    
    }
    else 
    {
        if (D > 0)
        {
            x1 = (-b + D_R) / (a*2);
            x2 = (-b - D_R) / (a*2);
            printf("x1 = %f\nx2 = %f", x1, x2);
        }
        else 
        { 
            if (D == 0)
            {
                x1 = -b / (a*2);
                printf("x1 = x2 = %f", x1);
            }
            else
            {
                printf("No roots");
            }
        }    
    }  
    return 0;
}
