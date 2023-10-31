 #include <stdio.h>
 
 int my_strcmp(char str1[],char str2[]);
 
 int main()
 {
 	char str1[] = "abcdef";
 	char str2[] = "abcdeg";
 	int result = my_strcmp(str1,str2);
 	printf("%d",result);
 }
 
 int my_strcmp(char str1[],char str2[])
 {
 	int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0') 
	{
        i++;
    }
    return str1[i] - str2[i];
 }

