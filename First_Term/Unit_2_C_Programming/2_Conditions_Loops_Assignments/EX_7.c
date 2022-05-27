#include <stdio.h> 

int main (void) 
{
	int counter; 
	int Num; 
	int Factorial = 1; 
	printf("Enter an integer: "); 
	scanf("%d", &Num); 
	
	if (0 == Num) { printf("Factorial = 1"); return 0; }
	if (!(Num > 0)) { printf("Factorial does not exit for negative number"); return 0; }
	
	for (counter = 1; counter <= Num; counter++)
	{
		Factorial *= counter; 
	}
	
	printf("Sum = %d",Factorial);
	
	
	
	return 0; 
}