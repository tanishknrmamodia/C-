/*
union is a user defined data type

structure : all variable have different memory
union: single shared memory location

*/
 #include<stdio.h>
 #include<string.h>
 union student
 {
    int id ;
    int marks ; 
    char fav_char;
    char name[34];
 };
 int main()
 {
    union student s1;
    strcpy(s1.name,"harry");
    s1.fav_char='u';
    s1.marks=45;
    s1.id= 1 ;
    printf("the id is %d \n",s1.id);
    printf("the marks is %d \n",s1.marks);
    printf("the fav_char is %c \n",s1.fav_char);
    printf("the name is %s \n",s1.name);
   
    return 0;
 }