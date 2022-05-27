#include <stdio.h> 

int main (void)
{
	float Num_1; 
	float Num_2; 
	float Num_3; 
	
	printf("Enter Three Number: "); 
	scanf("%f%f%f", &Num_1, &Num_2, &Num_3);
	
	if (Num_1 > Num_2 && Num_1 > Num_3)
		printf("%0.2f is the largest number",Num_1); 
	else if (Num_2 > Num_1 && Num_2 > Num_3)
		printf("%0.2f is the largest number",Num_2); 
	else if (Num_3 > Num_1 && Num_3 > Num_2)
		printf("%0.2f is the largest number",Num_3);
	else 
		printf("Three Number are equal"); 
	
	return 0; 
}
	