#include <stdio.h>
int main()
{
    int a = 3;
    int *ptra = &a;
    printf("%d\n", *ptra);
    
    printf("%p\n", ptra);
    return 0;
}