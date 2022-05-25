/*
 * EX4_C_Program_to_Multiply_Two_Floating_Point_Numbers.c
 *
 *  Created on: May 25, 2022
 *      Author: Abdulrahman
 */

#include <stdio.h>

int main (void)
{
	float Num_1, Num_2;
	double Multi;

	printf("Enter two numbers: ");
	fflush(stdout);
	scanf("%f%f",&Num_1, &Num_2);

	Multi = Num_1 * Num_2;

	printf("Product: %0.6lf", Multi);

}

