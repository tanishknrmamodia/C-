#include <stdio.h>

struct student
{
    int id;
    int marks;
    char fav_char;
} harry, ravi, shubham;
//  struct student harry , ravi , shubham ;  here it is global
int main()
{
    // struct student harry , ravi , shubham ; here it is local
    harry.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    harry.marks = 70;
    ravi.marks = 80;
    shubham.marks = 90;
    harry.fav_char = 'p';
    ravi.fav_char = 'p';
    shubham.fav_char = 'p';
    printf("harry got %d marks \n", harry.marks);

    return 0;
}