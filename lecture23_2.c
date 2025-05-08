// 1-d array

#include <stdio.h>
int main()
{
   // int marks[4];

   // marks[1] = 44;
    // marks[2] = 45;
    // marks[3] = 46;
    // marks[4] = 47;

    // printf(" marks of student 1 is %d \n", marks[1]);

    // marks[1] = 50;

    // printf(" marks of student 1 is %d ", marks[1]);
    int marks[4];
     for (int i = 0; i < 4; i++)
     {
        printf("enter the value of %d array: ",i);
        scanf("%d",&marks[i]);
     }
     for (int i = 0; i < 4; i++)
     {
        printf("the value of %d element of the array is %d\n",i,marks[i]);
     }
     
     int array[5] = {22,33,44,55,66}; //this is called decalration nand initialization at same time 
     printf("the value of 3rd place array is %d\n", array[3]);
     printf("the value of 5th place array is %d", array[4]);
     
    return 0;
}
