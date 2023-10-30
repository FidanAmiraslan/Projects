#include <stdio.h>
void my_strchr(char str[],char find,int size);
int my_strlen(char str[]);


int main()
{
	int size;
	char str[100];
	char find;
	
	printf("String: ");
	scanf("%99[^\n]s",str);
	
	printf("Element to find: ");
	scanf(" %c",&find);
	
	size = my_strlen(str) + 1;
	my_strchr(str,find,size);

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


void my_strchr(char str[],char find,int size)
{
	int flag = 0,index;
	for(int i = 0; i < size; i++)
	{
		if(str[i] == find)
		{
			flag = 1;
			index = i;
			break;
		}
	}
	if (flag)
	printf("%c's index is %d",find,index);
	else
	printf("%c not found in string",find);
}

