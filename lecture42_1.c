/*
local variable : variables whoich are accessed inside a function
global variable : defined outside the main method
 
*/
#include<stdio.h>
int b = 34; //this is a global variable
int func1(int b){
printf("the address of b inside func1 is %d\n",&b);
    return b*10;
}
int main()
{
    int b =344;
    printf("the address of b inside main is %d\n",&b);
    int val = func1(b);  // this b is different from uper one 
int *ptr = &val;
    printf("the value of func1 is %d",val);
    return 0;
}
