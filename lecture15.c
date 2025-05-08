/*
for loop 
transverse the array and linked list

for (size_t i = 0; i < count; i++)
{
    code
}

*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i ;
    for ( i = 0; i < 5; i++)
    {
        printf("%d \n",i);
    }
    
    
    return 0;
}
/*
this how you can initialize more than one variable in expression in for loop

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , j;
    for ( i = 0, j=0; i < 5; i++)
    {
        printf("%d %d\n",i,j);
    }
    
    
    return 0;
}
*/