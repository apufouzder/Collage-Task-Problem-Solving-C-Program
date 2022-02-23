#include <stdio.h>

int main()
{
    //Problem:4 Define an array. print all elements of the array using for loop and reverse array.
    // Step:1 Defined integer types array.
    int i, arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // Calculate array length.
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("length %d\n", length);

    // Print array all elements.
    for (i = 0; i < length; i++)
    {
        printf("%d \n", arr[i]);
    }
    printf("Reverse array:- \n");
    // Reverse main array.
    for (i = length-1; i >= 0; i--)
    {
        printf("%d \n", arr[i]);
    }

    return 0;
}
