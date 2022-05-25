/*
 * EX5_C_Program_to_Find_ASCII_Value_of_a_Character.c
 *
 *  Created on: May 25, 2022
 *      Author: Abdulrahman
 */


#include <stdio.h>

int main (void)
{
	char C;

	printf ("Enter a character: ");
	fflush(stdout);
	scanf("%c",&C);
	printf("ASCII value of %c = %i", C, C);
	return 0;
}




