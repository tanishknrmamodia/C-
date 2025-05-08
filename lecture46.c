/*
storge class:
1. scope : where will the variable be available 
2. default initial value : 
3. lifetime : life of that variable


#include<stdio.h>
extern int harry ;           iska mtlb harry ki value code mai kahi mai define hai and abhi usne koi space nhi li


*/
#include<stdio.h>

int sum ;
int myfunc(int a , int b)
{
    // auto int  sum;
    sum = a+b;
    return sum;
}
int main()
{
    // declaration - telling the compiler about the variable(no space reserved)
    // defination - declaration + space reservation

//    int sum = myfunc(3,5);
    printf("the sum is %d\n",sum);
    return 0;
}