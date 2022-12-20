#include<stdio.h> //
int main()  //program to find greatest of three numbers
{
  int a, b, c; // creating three variables
  printf(" enter the numbers: ");
  scanf("%d %d %d", &a, &b, &c); // taking input
  
  if(a> b && a>c) // condition for a to be greatest 
  {
  	printf(" %d is the  greatest number", a);
  }
  
  else if( b>a && b>c) // condition for b to be greatest
  {
  	printf("%d is the greatest number", b);
  }
  else
  { 
   printf(" %d is the greatest number", c); 
  }
   return 0;
   
}
   
  
  	
  	
 
