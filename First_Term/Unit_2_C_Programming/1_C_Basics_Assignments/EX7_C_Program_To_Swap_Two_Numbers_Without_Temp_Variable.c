/*
 * EX7_C_Program_To_Swap_Two_Numbers_Without_Temp_Variable.c
 *
 *  Created on: May 25, 2022
 *      Author: Abdulrahman
 */


#include <stdio.h>

int main (void)
{
	float a, b;

	printf("Enter Value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter Value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	/* we can use * and / operator to do this function, we can use XOR operator with integer numbers
	 * a = a * b;
	 * b = a / b;
	 * a = a / b;
	 * this is critical solution so may be overflow occur
	 */
	a = a + b;
	b = a - b;
	a = a - b;
	printf("After swapping, value of a = %0.2f\n",a);
	printf("After swapping, value of b = %0.2f\n",b);
	return 0;
}




