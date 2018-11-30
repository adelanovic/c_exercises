/*  This program prints a table consisting of
    n and n2. */

//Programming in C 4th Edition Chapter 4 Exercise 2

#include <stdio.h>

int main(void)
{
    int n, n2;
    printf("This program prints a table of values for n and n^2.\n");
    printf("This is printed up to the first 10 digits.\n");
    printf("  n                   n2\n");
    printf("----                -----\n");

    for(n = 1; n <=10; ++n){
        n2 = n*n;
        printf("%3i                    %3i\n\n",n, n2);
    }
    return 0;
}

//What i learned from this exercise is how important correct formating is.
//Do not forget to use escape characters to format items correctly.
