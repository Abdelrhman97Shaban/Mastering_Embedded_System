/*
 * EX2_C_Program_To_Print_a_Integer_Entered_by_a_User.c
 *
 *  Created on: May 25, 2022
 *  Author: Abdulrahman
 *  Description : Unit 2 C-Programming >> Assignment 2 "Print a Integer entered by user"
 */

#include <stdio.h>

int main (void)
{
	int Num;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d",&Num);
	printf("You entered: %d", Num);
	return 0;

}


