#include<stdio.h>
int main()
//program for finding greater of two numbers
{
	int num1, num2;
	printf("enter two numbers: ");
	scanf("%d %d", &num1, &num2); // taking input
	
	if(num1> num2)
	{
		printf(" %d is greater number", num1 );
	}
	else if(num2> num1)
	{
		printf(" %d is greater number", num2 );
	}
	else
	{
		printf("%d and %d are equal", num1, num2);
	}
		
		return 0;
}
	
