#include <stdio.h>
#include <string.h>

void reverse (char word[])
{
	int  x,i,length;
	length = strlen(word);
	
	for(i = 0; i < length / 2; i++)
	{
		x = word[i];
		word[i] = word[length - i - 1];
		word[length - i - 1] = x;
		
	}
}

int main()
{
 	char text[100];
 	scanf("%s",text);
 	reverse(text);
	printf("%s",text);
 	
}	

