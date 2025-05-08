#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int age ; 
    printf("enter your age :");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("yes you can vote");
    }
    // if the condition of if statements gets false then the complier will go in else if statements 
    else if (age>=10){
        printf(" you are between 10 to 18");
    }

    else if (age>=1){
        printf(" you are between 1 to 10");
    }
    else
    {
        printf("you can't vote");
    }
    
    return 0;
}
