#include <stdio.h>

int main()
{
    //Problem:3 Print 1 - 100, 100 - 1 using for loop.

    // Step:1 Defined variables. Print 1 - 100 number
    int i;
    // Step:2 Implement for loop and print 1-100 numbers.
    for(i = 1; i <= 100; i++)
    {
        printf("%d \n", i);
    }

    // Program:2 Defined variables. Print 100 - 1 number
    int a;
    // Step:2 Implement for loop and print 100-1 numbers.
    for(a = 100; a >= 1; a--)
    {
        printf("%d \n", a);
    }

    return 0;
}
