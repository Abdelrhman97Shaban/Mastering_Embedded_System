#include <stdio.h> 

int main (void) 
{
	char str[100]; 
	int length = 0,i;
	printf("Enter a String: "); 
	gets(str); 
	
	for(i = 0; str[i] != 0; i++)
	{
		length++; 
	}
	
	printf("Length of String: %d",length); 
	
	return 0; 
}