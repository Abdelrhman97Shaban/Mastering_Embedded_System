#include <stdio.h> 
 
void Reverse_Fun(void); 
int main (void)
{
	printf("Enter a sentence: "); 
	Reverse_Fun(); 
	return 0;
}

void Reverse_Fun(void)
{
	char ch; 
	scanf("%c",&ch); 
	if(ch != '\n')
	{
		Reverse_Fun(); 
		printf("%c",ch); 
	}
}
	

