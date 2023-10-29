#include <stdio.h>

int my_strlen(char str[]);
void my_strcpy(char str1[],char str2[]);

int main()
{
	char str1[] = "abcdef";
	int size = my_strlen(str1);
	char str2[size] = "";
	my_strcpy(str1,str2);
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


void my_strcpy(char str1[],char str2[])
{
	int len = my_strlen(str1);
	for(int  i = 0; i < len; i++)
	{
		str2[i] = str1[i];
	}
	printf("%s",str2);
	
}
