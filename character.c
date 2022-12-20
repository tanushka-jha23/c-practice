#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a); // taking input

    if( a>='a' && a<='z') //specifying condtition for lowercase
    {
        printf("it is in lowercase"); 
    }
    else if( a>='A' && a<='Z') // specifying condition for uppercase
    {
        printf(" it is in uppercase");
    }
    else 
    {
        printf(" it is a special character");
    }

    return 0;
     
}