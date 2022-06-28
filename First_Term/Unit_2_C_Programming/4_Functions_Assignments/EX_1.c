#include <stdio.h> 

int check_number (int num); 
int main (void)
{
	int start_interval; 
	int end_interval;
	int i,flag; 
	printf("Enter Two numbers(intervals): "); 
	scanf("%d%d",&start_interval,&end_interval);
	printf("\nPrime Numbers between %d and %d: ",start_interval,end_interval);
	for (i = start_interval; i <= end_interval; i++)
	{
		flag = check_number(i); 
		if (0 == flag) 
		{
			printf("%d ",i); 
		}
	}
	return 0; 
}

int check_number (int num)
{
	int j,flag = 0; 
	for (j = 2; j < num; j++)
	{
		if (num % j == 0)
		{
			flag = 1; 
			break;
		}
	}
	return flag; 
}
