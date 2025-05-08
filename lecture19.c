/*
what is a function :
function are used to divide a large c program into smaller pieces
we can awoid rewriting same logic through function
*/
#include<stdio.h>
int sum (int a ,int b); // this is function prototype helps to declare function after writing this we can define fucntion anywhere we want 
void printstar(int n);
int takenumber();


int main()
{
    int a , b , c ,d;
    a=9;
    b=87;
    c= sum(a,b);
    printstar(7);
    d= takenumber();
    printf("\nthe sum is %d",c);
    printf("\nentered number is %d",d);
    return 0;
}






int sum(int a, int b)
{
    return a+b;
}


void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}

int takenumber(){
int i ; 
printf("\nenter a number:");
scanf("%d",&i);
return i ;
}