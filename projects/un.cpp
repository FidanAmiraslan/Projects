#include <stdio.h>
#include <string.h>
int main() 
{
    int n, c, x, i,m;
    
    printf("Eded = ");
    scanf("%d", &n);
    char roman[10] = "";
    m = n / 1000;
    n = n % 1000;
   
	for (i = 0; i < m; i++)
	{
        strcat(roman, "M");
    	}
    
	c = n / 100; 
    	n = n % 100;
    
	if  (c < 4) 
    	{
    	for (i = 0; i < c ; i++)
		 {
        	 strcat(roman, "C");
    		 }
	}
	
	if  (c == 4) 
     		strcat(roman,"CD");
	
	if (c == 9)
     		strcat(roman,"CM");
	 
	else if(c >= 5 && c != 900) 
    	{
    		strcat(roman,"D");
    		c = c - 5;
		for (i = 0; i < c ; i++)
		 {
        		strcat(roman, "C");
    		 }
	}

 	x = n / 10; //10-90
   	n = n % 10;
    
	if  (x < 4) 
    	{
    		for (i = 0; i < x ; i++)
		 	{
        		strcat(roman, "X");
    			}
	}
	
	if  (x == 4) 
     		strcat(roman,"XL");

	
	if (x == 9)
     		strcat(roman,"XC");
	 
	else if(x >= 5 && x != 90) 
   	 {
    		strcat(roman,"L");
    		x = x - 5;
		for (i = 0; i < x ; i++)
		 {
        	strcat(roman, "X");
    		}
	}
	
	
    	n = n % 10;
	if  (n < 4) 
    	{
    		for (i = 0; i < n ; i++)
		 	{
        		strcat(roman, "I");
    			}
	}
	
	if  (n == 4) 
     		strcat(roman,"IV");
	
	if (n == 9)
     		strcat(roman,"IX");
	 
	else if(n >= 5 && n != 9) 
   	 {
    		strcat(roman,"V");
    		n = n - 5;
		for (i = 0; i < n ; i++)
		 {
        		strcat(roman, "I");
    		}
	}
    printf("Roman: %s\n", roman);
}
