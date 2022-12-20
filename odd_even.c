#include<stdio.h> //intitalising the program
int main()
{
    int a;
    printf(" enter an integer: "); 
    scanf("%d", &a); //taking input

    if(a % 2 == 0) //condition for an integer to be even
    {
        printf("%d is even", a); 
    }
    else 
    {
        printf(" %d is odd", a);
    }
    return 0;
}