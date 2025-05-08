#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    // char str[] = {'t', 'a', 'n', 'i', 's', 'h', 'k', '\0'};

    char str[]="tanishk"; // if i put 7 in [] then after running you will see some garbage value in the end
    
    printstr(str);
   

    return 0;
}