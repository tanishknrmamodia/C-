#include<stdio.h>
int main()
{
    
    int age ; 
    printf("enter your age :");
    scanf("%d",&age);

    if (age>18)
    {
        printf("yes you can vote");
    }
    else
    {
        printf("you can't vote");
    }
    
    return 0;
}
