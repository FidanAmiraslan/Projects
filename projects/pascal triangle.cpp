#include <stdio.h>
int fact(int x)  
{  
  if (x == 0)  
    return 1;  
  else  
    return(x * fact(x-1));  
}

int main()
{
  int n, c, i, m;
  
  printf("Number = ");
  scanf("%d", &n);
  
  for (i = 0; i <= n; i++)
  {
    for (m = 0; m <= i; m++)
    {
      c = fact(i) / (fact(m) * fact(i - m)); 
      printf(" %d ", c);
    }
    printf("\n");
  }
  
  return 0;
}
