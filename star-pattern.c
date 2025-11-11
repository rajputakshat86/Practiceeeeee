
#include <stdio.h>
int main()
{
    int user , num;
    printf("Enter which star pattern you want for right triangle enter 0 and reverse triangle enter 1\n");
    scanf("%d",&user);
    printf("enter how many lines of star you want to be print \n");
    scanf("%d",&num);
    switch (user)
    {
    case 0:
        for(int i = 1; i < num; i++){
            for(int j =0 ; j < i; j++ ){
                printf("*");
            }
            printf("\n");
        
        }   
        break;
    case 1:
        for(int i = 1; i < num; i++){
            for(int j = num ; j > i; j-- ){
                printf("*");
            }
            printf("\n");        
        }   
        break;
    default:
        printf("enter the user no. between 0 and 1");
        break;
    }
    return 0;
}