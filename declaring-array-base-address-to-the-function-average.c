#include <stdio.h>

// Function to calculate average using base address of array
int average(int *ptr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += *(ptr + i);  // Accessing array elements using pointer arithmetic
    }
    return sum / n;
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    int avg;

    avg = average(arr, n);  // Passing base address of array

    printf("The average of array elements is: %d\n", avg);

    return 0;
}

