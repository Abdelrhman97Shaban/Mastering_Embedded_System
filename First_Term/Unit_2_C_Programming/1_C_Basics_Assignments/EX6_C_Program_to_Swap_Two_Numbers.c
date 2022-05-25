/*
 * EX6_C_Program_to_Swap_Two_Numbers.c
 *
 *  Created on: May 25, 2022
 *      Author: Abdulrahman
 */


#include <stdio.h>

int main (void)
{
	float a, b, temp;

	printf("Enter Value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter Value of b: ");
	fflush(stdout);
	scanf("%f",&b);

	temp = a;
	a = b;
	b = temp;

	printf("After swapping, value of a = %0.2f\n",a);
	printf("After swapping, value of b = %0.2f\n",b);
	return 0;
}




