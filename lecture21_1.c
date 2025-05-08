/*
recursion in c : it is process when a function calls a copy of itself to work on a smaller problem

makes the life of programmer easy

best ways to understand recursion is solving example of factorial calculation

*/
#include<stdio.h>

int factorial(int number);

int main()
{
    int num;
    printf("enter the number of which you want factorial:");
    scanf("%d",&num);

    printf("the factorial of %d is %d",num,factorial(num));
    return 0;
}


int factorial(int number){ 
    if (number == 1 || number == 0)
    {
        return 1 ;
    }
    else{
        return(number*factorial(number-1));
    }
    
}
