// if else control statements quiz code with harry tut 10 22:30.

#include <stdio.h>

int main() {
    int maths, science;

    printf("Did you pass Maths? (1 for Yes, 0 for No): ");
    scanf("%d", &maths);

    printf("Did you pass Science? (1 for Yes, 0 for No): ");
    scanf("%d", &science);

    if (maths == 1 && science == 1)
        printf("Congratulations! You get Rs.10\n");
    else if (maths == 1)
        printf("You get Rs.5 for passing Maths\n");
    else if (science == 1)
        printf("You get Rs.5 for passing Science\n");
    else
        printf("Sorry! No prize this time.\n");

    return 0;
}
