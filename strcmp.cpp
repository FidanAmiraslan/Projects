#include <stdio.h>

int my_strcmp(char str1[],char str2[],int size);
int my_strlen(char str[]);


int main()
{
	int size1,size2,size;
	char str1[] = "abcdA";
	char str2[] = "abcda";
	
	size1 = my_strlen(str1);
	size2 = my_strlen(str2);
	size = size1 > size2 ? size1 : size2;
	
	int x = my_strcmp(str1,str2,size);
	printf("%d",x);
}


int my_strcmp(char str1[],char str2[],int size)
{
	int e1,e2,x;
	for (int i = 0; i < size; i++)
	{
		e1 = (int)str1[i];
		e2 = (int)str2[i];	
		
		if(e1 > e2 || e1 < e2)
		{
			x = e1 - e2;
			break;
		}
		else if (e1 == e2) 
			x = 0;

	}
	return x;

}
int my_strlen(char str[])
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		count = count + 1;
	}
	return count;
}


