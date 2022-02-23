#include <stdio.h>

int main()
{
    //Problem:1 Summation/Subtraction/Multiplication/Division between two numbers using c program.

    // Step:1 Defined Integer types all variables.
    int a, b, sum, sub, multi, divi;
    a = 30;
    b = 20;

    // Step:2 Start operation Summation/Subtraction/Multiplication/Division
    sum = a + b;
    sub = a - b;
    multi = a * b;
    divi = a / b;

    // Step:3 Print program
    printf("Summation is = %d\n", sum);
    printf("Subtraction is = %d\n", sub);
    printf("Multiplication is = %d\n", multi);
    printf("Division is = %d\n", divi);

    return 0;
}
