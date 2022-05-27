#include <stdio.h> 

int main (void) 
{
	char operator; 
	float Num_1; 
	float Num_2; 
	
	printf("Enter operator either + or - or * or divide: "); 
	scanf("%c",&operator); 
	printf("Enter two operands: ");
	scanf("%f%f", &Num_1, &Num_2); 
	
	switch(operator)
	{
		case '+':
		{
			printf("%0.1f %c %0.1f = %0.1f", Num_1, operator, Num_2, Num_1 + Num_2);
			break; 
		}
		case '-':
		{
			printf("%0.1f %c %0.1f = %0.1f", Num_1, operator, Num_2, Num_1 - Num_2);
			break; 
		}
		case '*':
		{
			printf("%0.1f %c %0.1f = %0.1f", Num_1, operator, Num_2, Num_1 * Num_2);
			break; 
		}
		case '/':
		{
			printf("%0.1f %c %0.1f = %0.1f", Num_1, operator, Num_2, Num_1 / Num_2);
			break; 
		}
		default:
		{
			printf("Wrong operator"); 
			break;
		}
	}
	
	return 0; 
}