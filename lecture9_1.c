#include<stdio.h>
int main(){

int a = 5;
float b = 9.4 ; 

printf("the value of a is %d and the value of b is %f\n\n\n", a , b);  /*this id format specifier where %d 
is used for int value and %f for float value*/

printf("the value of a is %d and the value of b is %.4f\n", a , b); 
printf("the value of a is %d and the value of b is %.3f\n", a , b); 
printf("the value of a is %d and the value of b is %7.3f\n", a , b); 
printf("the value of a is %d and the value of b is %18.3f tanishk\n", a , b); 
printf("the value of a is %d and the value of b is %-18.3f tanishk\n", a , b); 
/* now here you can see how decimal values are varrying */
    return 0;
}



