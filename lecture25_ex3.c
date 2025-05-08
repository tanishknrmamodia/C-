/*
fibonacci series
*/#
#include<stdio.h>
int fib_recursive(int n);
int fib_iterative(int n);



int main()
{
    int t ;
    printf("enter the position of fionacci series number:");
    scanf("%d",&t);
  
  printf("the value of fibonacci number at position no %d using recursive approach is %d\n",t,fib_recursive(t));
  printf("the value of fibonacci number at position no %d using iterative approach is %d",t,fib_iterative(t));
    return 0;
}


int fib_recursive(int n){
    if (n==1||n==2)
    {
        return n-1;
    }
    else
    {
        return fib_recursive(n-1)+fib_recursive(n-2);
    }
    
}


// 0,1,1,2,3,5,8,13,21,34,55,89...........

int fib_iterative(int n){
int a = 0 ;
int b = 1 ;
for (int i = 0; i < n-1; i++)
{
       b = a+b; //1
       a = b-a; //1
}
return a ;

}