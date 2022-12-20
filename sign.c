#include<stdio.h>
int main()
{
    int a; 
    scanf("%d", &a); // taking input

    if( a>= 0 ) // specifying condition for an integer to be positive
    {
        printf("%d is a positive integer", a);
    }
    else 
    {
        printf("%d is a negative integer", a);
    }

    return 0;
}