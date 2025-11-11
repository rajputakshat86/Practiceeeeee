#include <stdio.h>
int main()
{
    int user, num;
    printf("Enter the following numbers for the respective patterns, 0 for right pattern triangle, 1 for reverse right pattern triangle\n");
    scanf("%d", &user);
    printf("Enter the number to represent the no of lines in the pattern\n");
    scanf("%d", &num);

    switch (user)
    {
    case 0:
        for (int i = 1; i < num; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    case 1:
        for (int i = 1; i < num; i++)
        {
            for (int j = num; j > i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;
    default:
        printf(" Enter the number between o and 1");
        break;
    }

    return 0;
}