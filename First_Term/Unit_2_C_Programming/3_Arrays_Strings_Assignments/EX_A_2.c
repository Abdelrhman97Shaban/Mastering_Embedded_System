#include <Stdio.h> 

int main (void) 
{
	int n; 
	printf("Enter The Number of data: "); 
	scanf("%d",&n); 
	float data[n];
	float sum = 0; 
	int i; 
	for(i = 0; i < n; i++)
	{
		printf("%d. Enter number: ",i+1);
		scanf("%f",&data[i]);
		sum = data[i] + sum; 
	}
	printf("Average = %0.2f",(sum / n)); 
	return 0; 
}