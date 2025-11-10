#include <stdio.h>
int fibo(int number)
{
    if (number == 1 || number == 2)
    {
        return 0;
    }
    else
    {
         return fibo(number - 1) + fibo(number - 2);
    }
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("enter a valid number:\n");
    }
    else
    {
        printf("fibonacci of %d is %d", n, fibo(n));
    }
    return 0;
}
