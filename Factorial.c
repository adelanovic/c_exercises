// This program is an exercise from Chapter 4
// Programming in C 4th Edition by Kochan
/* This program will calculate the factorial of the first 10 
factorials. The formula for a factorial is 5! = 5 x 4 x 3 x 2 x 1 = 120 */

/* 1. Define three integer variables
   2. Give any values necessary to the variables
   3. Using a loop calculate the first 10 factorials
   4. Show the output to the user.  */

#include <stdio.h>

int main(void)
{
int i, counter, value, j, k;

printf("This program calculates factorials from 1 to 10\n");
printf("Number\t\t\t\t\tFactorial\n");
printf("------\t\t\t\t\t---------\n");
i = 1;
value = 1;
	do 
		{
		 value *= i;
		 printf("%10i\t\t\t\t%10i\n", i, value);
		 ++i; } while( i != 11);
return 0;
}



// Learned that giving the correct initial values 
// Is extremely important to getting the correct output
// A value defaulted to 0 messes up an entire program.
// Writing down pseudocode is important
// Work through solutions from top down
// Define the issue you want to solve

