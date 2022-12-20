#include<stdio.h>
int main()
{
    char p;
    scanf("%c", &p);

    if( p>='a' && p<='z' || p>='A' && p<='Z')
    {
        printf("it is an alphabet");
    }
    else
    {
        printf("it's not an alphabet");
    }
    
    return 0;
}