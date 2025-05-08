// 2-d array

#include <stdio.h>
int main()
{
    int marks[2][4] = {{4, 3, 2, 3}, // now this 2 cross 4 matrix i.e 2 rows and 4 columns
                       {3, 2, 3, 3}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("the value of %d , %d element of the array is %d\n", i, j, marks[i][j]);
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
}
