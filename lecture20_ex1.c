// multiplication table
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number you want multiplication table of :\n");
    scanf("%d",&num);

    printf("the multiplication of %d is as follows:\n",num);
    for (int i = 0; i < 11; i++)
    {
        int multiplication = num * i ;
        printf("%d X %d = %d\n",num,i, multiplication);
    }
    
    return 0;
}
