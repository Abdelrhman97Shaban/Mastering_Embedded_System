#include <stdio.h> 

int main (void)
{
	int num; 
	printf("Enter number of element: "); 
	scanf("%d",&num);
	int arr[num], element,location,i; 
	for (i = 0; i < num; i++)
	{
		scanf("%d",&arr[i]); 
	}
	
	printf("Enter The element to be searched: "); 
	scanf("%d",&element);
	
	for (i = 0; i < num; i++) // Linear Search 
	{
		if (element == arr[i])
		{
			location = i + 1; 
			break; 
		}
	}
	
	printf("Number Found at the location = %d\n",location);
	return 0; 
}