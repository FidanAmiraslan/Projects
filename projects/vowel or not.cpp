#include <stdio.h>
#include <stdbool.h>

int main() {
	char letter;
	scanf("%c",&letter);
    char vowel[] = "aeiouAEIOU";
	int n = 0;
    for (int i = 0; vowel[i] != '\0'; i++) {
        
		if (vowel[i] == letter) 
		{
          n = 1;
          break;
        }
    }
    
    if (n == 1)
    {
    	printf("vowel");
	}
    
    else 
    {
    	printf("consonant");
	}
}
