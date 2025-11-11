#include <stdio.h>

// Function to calculate average of an array using int
int average(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;  // Integer division
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    int avg;

    avg = average(arr, n);

    printf("The average of array elements is: %d\n", avg);

    return 0;
}
