#include <stdio.h>
int main()
{
    int a, b;
    printf("enter number a \n"); // \n is new line character
    scanf("%d", &a); //  here &a is defined as address of a

    printf("enter number b \n");
    scanf("%d", &b);

    printf("the sum is %d\n", a+b);
    return 0;
}
 