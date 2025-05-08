/*
string:
string is not a data type 
string is a very useful concept used to model real world entitties like name , city , etc
we express strings using an array of characters terminated by a null character ('\0').

 to store string in an array the size we needed is length of string + 1
 we will express string in array using character array
 null character - \0


 we can create a character array in the following ways :
 1. char name[]="harry";  if we use this then compliler will automatically add \0 int the end 
 2. char name[]={'h','a','r','r','y','\0'}

 taking string input fromthe user 

 char str[52];  we made character array of 52 length
 gets(str);  this is use to input the string and using this we shouldnt care about the null character in the end
 
 printf("%s",str);     way to print string
 puts(str);            another way to print the string

 
*/