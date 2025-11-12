#include <stdio.h>

void arrayrev(int arr[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[6 - i];
        arr[6 - i] = temp;
    }
}

void arrayprint(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of element %d is %d\n", i, arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 67};

    printf("Before reversal the array is:\n");
    arrayprint(arr);

    arrayrev(arr);

    printf("After reversing the array:\n");
    arrayprint(arr);

    return 0;
}
