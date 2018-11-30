// Using a different formula to make a program
// that gets a triangular number
// The program also increments by 5 (5,10,15..50)
// Programming in C 4th Ed Chapter 4 exercise 2
// Use formula triangularNumber = n ( n + 1) / 2

/* With this program i am also learned to use ubuntu terminal with pico
and gcc */

// pico filename.c/txt, gcc filename, ./a.out 
#include <stdio.h>

int main(void)
{

int i, n, triangularNumber;
printf("Number               Triangular Number\n");
printf("------               ------------------\n");

triangularNumber = 0;
n = 50;

for(i = 0; i <= n; i = i + 5)
	{ triangularNumber = i*(i+1)/2;
	printf("%3i                   %3i\n", i, triangularNumber);
	}
return 0;
}

/* This exercise enabled me to see how else variables  can be manipulated
using a for loop and loop expressions. It also showed me that there are
different methods and algorithms to achieve the same results */


	
