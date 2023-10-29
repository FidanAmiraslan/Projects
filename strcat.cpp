#include <stdio.h>

void my_strcat(char str1[],char str2[]);
int my_strlen(char str[]);

int main()
{
	char str1[] = "12345";
	char str2[] = "678910";
	my_strcat(str1,str2);
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

void my_strcat(char str1[],char str2[])
{
	int len1,len2,len;
	len1 = my_strlen(str1);
	len2 = my_strlen(str2);
	len = len1 + len2;
	char str[len];
	
	for (int i = 0; i < len1; i++)
	{
		str[i] = str1[i];
	}
	
	int index = len1;
	
	for(int m = 0;  m < len; m++)
	{
		str[index] = str2[m];
		index = index + 1;
	}
	
	printf("%s",str);

}
