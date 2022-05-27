#include <stdio.h> 

int main (void) 
{
	int counter; 
	int Num; 
	int Sum = 0; 
	printf("Enter an integer: "); 
	scanf("%d", &Num); 
	
	if (!(Num > 0)) { printf("You must enter positive integer"); return 0; }
	
	for (counter = 0; counter <= Num; counter++)
	{
		Sum += counter; 
	}
	
	printf("Sum = %d",Sum);
	
	
	
	return 0; 
}