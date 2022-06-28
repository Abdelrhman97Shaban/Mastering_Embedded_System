#include <stdio.h> 

int calc_factorial (int num);
int main (void)
{
	int pos_int;
	int fact; 
	printf("Enter Positive Integer: "); 
	scanf("%d",&pos_int); 
	fact = calc_factorial(pos_int); 
	printf("Factorial of %d = %d ", pos_int, fact);
	return 0; 
}

int calc_factorial (int num)
{
	if(num != 1)
		return num * calc_factorial(num - 1); 
}
