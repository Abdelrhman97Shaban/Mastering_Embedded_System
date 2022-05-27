#include <stdio.h> 

int main (void) 
{
	float Num; 
	printf("Enter a number: "); 
	scanf("%f",&Num); 
	
	if (Num > 0)
		printf("%0.2f is positive",Num); 
	else if (Num < 0) 
		printf("%0.2f is negative",Num);
	else 
		printf("%You Entered Zero");
	
	return 0; 
}