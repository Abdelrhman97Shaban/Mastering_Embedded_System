#include <Stdio.h> 

int main (void) 
{
	int arr[20], element, num, location,i; 
	printf("Enter number of element: "); 
	scanf("%d",&num);
	
	for (i = 0; i < num; i++)
	{
		scanf("%d",&arr[i]); 
	}
	
	printf("Enter The element to be instert: "); 
	scanf("%d",&element); 
	
	printf("Enter The Location: "); 
	scanf("%d",&location);

	for (i = num; i >= location; i--)
	{
		arr[i] = arr[i - 1]; 
	}
	
	num++; 
	arr[location - 1] = element; 
	
	for (i = 0; i < num; i++)
	{
		printf("%d ",arr[i]); 
	}
	
	
	return 0; 
}