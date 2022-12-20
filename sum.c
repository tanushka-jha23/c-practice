#include<stdio.h>
int main()
{
    int num1 , num2;
    int sum;

    printf(" enter a number: ");
    scanf(" %d", &num1);
    printf(" enter another number: ");
    scanf("%d", &num2 );

    sum = num1 + num2;
    printf(" sum of %d and %d is %d", num1, num2, sum);

    return 0;

}