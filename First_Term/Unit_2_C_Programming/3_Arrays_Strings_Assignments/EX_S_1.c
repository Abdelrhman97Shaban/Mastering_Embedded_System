#include <stdio.h> 
#include <strings.h>
int main (void)
{
	char str[100]; 
	char ch; 
	int freq = 0,i; 
	printf("Enter a String: ");
	gets(str); 
	printf("Enter The character to find frequancy: "); 
	scanf("%c",&ch); 
	for(i = 0; i < strlen(str); i++)
	{
		if (ch == str[i])
		{
			freq++; 
		}
	}
	
	printf("Frequency of %c = %d",ch,freq); 
	
	return 0; 
}