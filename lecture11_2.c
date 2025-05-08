#include<stdio.h>
int main()
{
    int age ; 
    printf("enter your age:");
    scanf("%d",&age);

    switch (age)
    {
    case 10:
        printf("age is 10");
        break;
    case 20:
        printf("age is 20");
        break;
    case 30:
        printf("age is 30");
        break;
    
    default:
     printf("age is not 10 , 20 ,30 ");
        break;
    }
    return 0;
}
