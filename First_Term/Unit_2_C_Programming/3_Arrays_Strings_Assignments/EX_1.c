#include <Stdio.h> 

int main (void) 
{
	float a[2][2]; 
	float b[2][2]; 
	int r; 
	int c;
	
	
	printf("Enter the elements of 1st matrix\n");	
	for (r = 1; r <= 2; r++)
	{
		for (c = 1; c <= 2; c++)
		{
			printf("Enter a%d%d: ",r,c); 
			scanf("%f",&a[r-1][c-1]); 
		}
	}
	
	printf("Enter the elements of 2nd matrix\n");
	for (r = 1; r <= 2; r++)
	{
		for (c = 1; c <= 2; c++)
		{
			printf("Enter b%d%d: ",r,c); 
			scanf("%f",&b[r-1][c-1]); 
		}
	}
	
	printf("Sum of Matrix\n");
	for (r = 1; r <= 2; r++)
	{
		for (c = 1; c <= 2; c++)
		{
			printf("%0.1f ",a[r-1][c-1] + b[r-1][c-1]); 
		}
		printf("\n"); 
	}

	return 0; 
}