#include <stdio.h> 

int get_power (int base, int exp); 
int main (void) 
{
	int base, exp, result; 
	printf("Enter base number: "); 
	scanf("%d",&base); 
	printf("Enter power number: "); 
	scanf("%d",&exp);
	result = get_power(base, exp); 
	printf("%d ^ %d = %d", base, exp, result);
	return 0; 
}

int get_power (int base, int exp)
{
	if (exp != 0) 
	{
		return (base * get_power(base, exp - 1)); 
	}
	else 
	{
		return 1; 
	}
}