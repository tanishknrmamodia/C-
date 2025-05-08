/*
null pointer is dosent store anyhting

null pointer : initialize a pointer variable when that pointer variable isnt assigned any valid memory address yet

int *ptr=NULL;
*/
#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptra);
    printf("The value of a is %d\n", *ptra);
    printf(" the address of some garbage is %p\n", ptr2);
    printf("The value of a is %d\n", a);
    return 0;
}
