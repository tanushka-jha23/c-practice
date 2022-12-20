#include<stdio.h>
int main()
{
    float area;
    float r;
    printf(" enter radius : ");
    scanf("%f", &r);

    area= 3.14* r * r;
    printf(" area of circle is %f", area);

    return 0;
}
