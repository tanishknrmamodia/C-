/*
GOTO statement 
also called jump sttaements
mainly used to break multiple loops 
it also used to exit nested loops
*/
#include<stdio.h>
int main()
{
    label:
    printf("we are inside label\n");
    goto end;
    printf("hello world\n"); 
    goto label;
    end:
    printf("we are at end");

    return 0;
}
