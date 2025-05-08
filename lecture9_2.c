/*  
%c is used to print character 
%d is used to print integer
%f is used to print float
%l is used to print long integer
%lf is used to print double
%Lf is used to print long double

constant cant be changed 
*/
#include<stdio.h>

int main()
{
    int a = 8;
    float b = 7.33 ;  // if we add const infront of float then we can see complier will show error 
    //                  as we declare b as a const and it cannot be changed.
    b=7.22;
    
  
    return 0;         // we can also print constant using #define
} 
//   \n this is a single character