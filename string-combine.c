#include <stdio.h>
#include <string.h>

int main()
{
    char s1[200];
    char s2[200];
    char s3[200] = " is a frind of ";

    printf("Enter the name of first friend\n");
    scanf("%s", &s1);

    printf("Enter the name of second friend\n");
    scanf("%S", &s2);

    puts(strcat(s1,(strcat(s3, s2))));

    return 0;
}