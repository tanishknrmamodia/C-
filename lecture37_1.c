/*
structure allows us to combine data of different types together

syntax
struct [structure_name]
{
 data 
}
[structure_variable];

*/
#include<stdio.h>
struct employee{
    int id ;
    float marks;
};
int main()
{
    struct employee e1;
    e1.id=12;   // . operator is called structure member operator
    e1.marks=34.12;

    // and this is also written as 
    // struct employee e1 = {12,34.12};
    return 0;
}