/*
using switch

units and conversion

make a conversion table of these conversion

1. kms to miles
2. inches to foot
3. cms to inches
4. pound to kgs
5. inches to meters
*/
#include <stdio.h>
int main()
{
    int chossing_conversion;
    float conversion;
    printf("1. kms to miles\n2. inches to foot\n3. cms to inches\n4. pound to kgs\n5. inches to meters\n");
    printf("enter which conversion number you want : ");
    scanf("%d", &chossing_conversion);
    switch (chossing_conversion)
    {
    case 1:

        printf("you have choosen km to miles conversion \n");
        printf("enter number of km you want in miles: ");
        scanf("%f", &conversion);
        float miles = conversion / 1.609;
        printf("the number of  %0.4f km in miles is %0.4f .", conversion, miles);
        break;

    case 2:

        printf("\nyou have choosen inches to foot conversion \n");
        printf("enter number of inch you want in foot: ");
        scanf("%f", &conversion);
        float foot = conversion / 12;
        printf("the number of  %0.4f inch in foot is %0.4f .", conversion, foot);
        break;
    case 3:

        printf("you have choosen cm to inch conversion \n");
        printf("enter number of cm you want in inch: ");
        scanf("%f", &conversion);
        float inch = conversion / 2.54;
        printf("the number of  %0.4f cm in inch is %0.4f .", conversion, inch);
        break;
    case 4:

        printf("you have choosen pound to kgs conversion \n");
        printf("enter number of pound you want in kgs: ");
        scanf("%f", &conversion);
        float kgs = conversion / 2.205;
        printf("the number of  %0.4f pound in kgs is %0.4f .", conversion, kgs);
        break;
    case 5:

        printf("you have choosen inches to meters conversion \n");
        printf("enter number of inches you want in meters: ");
        scanf("%f", &conversion);
        float meters = conversion / 39.37;
        printf("the number of  %0.4f inches in meters is %0.4f .", conversion, meters);
        break;
    default:
        printf("invalid conversion");
        break;
    }
    return 0;
}
