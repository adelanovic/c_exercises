// This program asks the user for an integer
// The integer is then returned to the user as the triangular number
/*  1. Create variables with counters and output
    2. Ask user for input
    3. Store the input as a variable
    4. Create a for loop that will keep looping as long as integers are input.
    5. Create a nested loop that gets a triangular number */

#include <stdio.h>
#include <stdlib.h> // Required for exit(1)

int main(void)
{
    int i, n, counter, triangularNumber,j, k;

    printf("####################################################################################\n");
    printf("###############################WELCOME##############################################\n");
    printf("###############THIS PROGRAM CALCULATES TRIANGULAR NUMBERS###########################\n");
    printf("####################################################################################\n");

    printf("Please enter how many triangular numbers you want to calculate. Enter -1 to exit: \n");
    scanf("%i", &n);

    if (n == -1)  {
        exit(1);}
    else {
        printf("We are going to calculate %i numbers.\n",n);}


    for(counter = 1; counter <= n; ++counter){

            printf("Enter an integer: \n\t\t");
            scanf("%i", &j);

            triangularNumber = 0;


            for(i = 1; i <= j; ++i)

            triangularNumber += i;
            printf("The triangular number of %i is %i\n", j, triangularNumber);
        }
    return 0;
}

// What was learned from this exercise

/*  Nested for statements and curly braces need to be correctly used
    for your program to work. Ensure that your loop expressions are correctly
    matching what you want your program to do.

    EX: I used triangularNumber += j; instead of +=i causing wrong output.
    j variable is the # i want to reach while triangularNumber + i is what
    adds up to it by incrementing to j. For example is j = 2 then 1+2+3 = 6.
    When using j i was adding a number to the same number x number of times
    instead of adding a number + i x number of times. */


// Overall learned a lot from exercise, reference for Triangular Numbers
// Programming in C 4th Edition (Chapter 4) Kochan
