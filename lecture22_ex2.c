/*

units and conversion

make a conversion table of these conversion


1. kms to miles
2. inches to foot
3. cms to inches
4. pound to kgs
5. inches to meters
*/

#include <stdio.h>
int conversion(int num);

int main()
{
    int chossing_conversion;
    printf("see what kind of conversion this code can do  \n 1. kms to miles \n 2. inches to foot \n 3. cms to inches \n 4. pound to kgs \n 5. inches to meters\n enter which conversion you want conversion: ");
    scanf("%d", &chossing_conversion);
    conversion(chossing_conversion);
    return 0;
}

int conversion(int num)
{

    // kms to miles
    if (num == 1)
    {
        float km_miles;
        printf("you have choosen km to miles conversion \n");
        printf("enter number of km you want in miles: ");
        scanf("%f", &km_miles);
        float miles = km_miles / 1.609;
        printf("the number of  %0.4f km in miles is %0.4f .", km_miles, miles);
    }

    // inches to feet
    else if (num == 2)
    {
        float inch_foot;
        printf("you have choosen inches to foot conversion \n");
        printf("enter number of inch you want in foot: ");
        scanf("%f", &inch_foot);
        float foot = inch_foot / 12;
        printf("the number of  %0.4f inch in foot is %0.4f .", inch_foot, foot);
    }

    // cms to inches
    else if (num == 3)
    {
        float cm_inch;
        printf("you have choosen cm to inch conversion \n");
        printf("enter number of cm you want in inch: ");
        scanf("%f", &cm_inch);
        float inch = cm_inch / 2.54;
        printf("the number of  %0.4f cm in inch is %0.4f .", cm_inch, inch);
    }

    // pound to kgs
    else if (num == 4)
    {
        float pound_kgs;
        printf("you have choosen pound to kgs conversion \n");
        printf("enter number of pound you want in kgs: ");
        scanf("%f", &pound_kgs);
        float kgs = pound_kgs / 2.205;
        printf("the number of  %0.4f pound in kgs is %0.4f .", pound_kgs, kgs);
    }

    // inches to meters
    else if (num == 5)
    {
        float inches_meters;
        printf("you have choosen inches to meters conversion \n");
        printf("enter number of inches you want in meters: ");
        scanf("%f", &inches_meters);
        float meters = inches_meters / 39.37;
        printf("the number of  %0.4f inches in meters is %0.4f .", inches_meters, meters);
    }
}


