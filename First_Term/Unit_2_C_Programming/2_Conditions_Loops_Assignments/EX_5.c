#include <stdio.h> 

int main (void) 
{
	
	char character;
	char Lower_Characters;
	char Upper_Characters;	
	
	printf("Enter a character: "); 
	scanf("%c",&character); 
	
	Lower_Characters = (character >= 'a' && character <= 'z');
	Upper_Characters = (character >= 'A' && character <= 'Z');

	if (Lower_Characters || Upper_Characters) 
		printf("%c is a alphabet",character); 
	else 
		printf("%c is not a alphabet",character);
	
	return 0; 
}