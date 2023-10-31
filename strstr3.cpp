#include <stdio.h>

int wordCount(char s[]);
int my_strcmp(char str1[], char str2[]);

int main() {
    int count, i = 0, j,index = 0; // i charindex, j words index
    char str[100], find[100], word[100];

    printf("String: ");
    scanf(" %[^\n]s", str);

    printf("Word to Find: ");
    scanf("%s", find);

    count = wordCount(str);
    printf("Words: %d\n", count);

    for (int k = 0; k < count; k++) 
	{
         j = 0;

        while (str[i] != ' ' && str[i] != '\0') 
	{
            word[j] = str[i];
            int cmp = my_strcmp(find, word);

            if (cmp == 0) 
            {
                printf("'%s' found at index %d\n", find,index);
                break;
            }
			
            i++;
            j++;
        }

        word[j] = '\0';
        i++;
        index++;
    }
    
}

int wordCount(char str[]) 
{
    int count = 0;
   
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ') 
	{
            count++;
        }
    }
    
	return count + 1;
}


int my_strcmp(char str1[], char str2[]) 
{
    int i = 0;
    
	while (str1[i] == str2[i] && str1[i] != '\0') 
	{
            i++;
        }
    
	return str1[i] - str2[i];
}
