/*
take input from the user to chosse 0 for triangular star pattern and 1 for reversed trianangular pattern
then print pattern accordingly

triangular star pattern
*
**
***
****

reversed triangular star pattern
****
***
**
*

*/

#include <stdio.h>
int main()
{
    int t, rows;
    printf("enter 1 if you want triangular pattern\nenter 2 if you want reverse triangular pattern\n");
    scanf("%d", &t);

    switch (t)
    {
    case 1:

        printf("you have choosen triangular pattern");
        printf("enter the number of rows:");
        scanf("%d", &rows);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }

            printf("\n");
        }
        break;


    case 2:

        printf("you have choosen reverse triangular pattern");
        printf("enter the number of rows:");
        scanf("%d", &rows);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j <= rows - i - 1; j++)
            {
                printf("*");
            }

            printf("\n");
        }
        break;

    default:
    printf("you entered invalid number");
        break;
    }

    return 0;
}
