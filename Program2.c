#include <stdio.h>

int main()
{
    //Problem:2 Define if a number is odd/even using the if-else condition.

    // Step:1 Defined/input variables.
    int x;
    printf("Input a number: ");
    scanf("%d", &x);

    // Step:2 Check if a number is odd/even and print output.
    if(x % 2 == 0)
    {
        printf("%d is a even number.", x);
    }
    else
    {
        printf("%d is a odd number.", x);
    }

    return 0;
}
