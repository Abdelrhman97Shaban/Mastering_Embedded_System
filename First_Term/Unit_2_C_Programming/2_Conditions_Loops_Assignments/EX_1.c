/*
 * EX1_C_Program_to_Check_a_Number_Is_Even.c
 *
 *  Created on: May 27, 2022
 *      Author: Abdulrahman
 */

#include <stdio.h>

int main (void)
{
	int Num;
	printf("Enter an integer you want check: ");
	scanf("%d",&Num);
	if (Num == 0)
		printf("Man you enter %d",Num);
	else
	{
		if (Num % 2 == 0)
			printf("%d is even",Num);
		else
			printf("%d is odd",Num);
	}

}

