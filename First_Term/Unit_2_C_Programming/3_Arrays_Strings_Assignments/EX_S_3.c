#include <stdio.h> 
#include <strings.h> 

int main (void) 
{
	char str[100]; 
	int i,j, length = 0; 
	
	printf("Enter String: "); 
	gets(str); 
	int len = strlen(str); 
	char arr[len]; 
	for(i = 0, j = len - 1; i < len; i++,j--)
	{
		arr[j] = str[i]; 
	}
	printf("Reverse string is: ");
	puts(arr);
	
	return 0; 
}