/*
 * EX3_C_Program_to_Add_Two_Integers.c
 *
 *  Created on: May 25, 2022
 *      Author: Abdulrahman
 */


#include <stdio.h>

int main (void)
{
	int Num_1, Num_2, Sum;

	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d%d",&Num_1, &Num_2);
	Sum = Num_1 + Num_2;
	printf("Sum = %d", Sum);
}
