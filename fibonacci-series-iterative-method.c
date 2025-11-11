#include<stdio.h>
int fibo_iterative(int n)
{
    int num;
    int a, b;
    a = 0;
    b = 1;

    for(int i = 0; i<n-1; i++)
    {
        b=a+b;
        a=b-a;
    }
    return a;
}
int main()
{
    int num;
    printf("Enter a number you want fibonacci series of:\n");
    scanf("%d", &num);
    printf("Fibonacci series of %d is %d\n", num, fibo_iterative(num));
    return 0;

}