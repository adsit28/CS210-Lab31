/** lab31-5.c
* ===========================================================
* Name: FIRST LAST, DATE
* Section: SECTION
* Project: Lab 31
* ===========================================================  */

#include "lab31functs.h"

int main() {

    // Using recursion, implement a function, called fibonacci, which accepts one integer input
    // parameter N, and returns the Nth value of the fibonacci sequence. Note that the fibonacci 
    // sequence is defined as: fib(0) = 0, fib(1) = 1, fib(N >= 2) = fib(N-1) + fib(N-2)
    //
    // Think through the base cases and the recursive case, before adding the function prototype to the 
    // lab31.h header and defining your function in this file.
    //
    // Try calling your function with a few test cases to make sure it works.
     // Ask the user for the Fibonacci index

     int n;
    printf("Enter a number to find the Fibonacci value: ");
    scanf("%d", &n);
    
    // Call the fibonacci function and print the result
    printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
    
    return 0;
}
