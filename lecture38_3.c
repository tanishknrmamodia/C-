#include<stdio.h>

int main()
{
    typedef int* intpointer;
//   int *a,b;   idhar a ek pointer hai , b ek integer hai
  intpointer a , b ;
  int c = 89;
  a = &c;
  b= &c ;
    return 0;
}