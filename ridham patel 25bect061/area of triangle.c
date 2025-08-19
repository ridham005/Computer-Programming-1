#include <stdio.h>

int main ()
{
    float h,l,a;
    printf("Enter the height of the triangle:\n");
    scanf("%f",&h);
    printf("Enter the length of base of triangle:\n");
    scanf("%f",&l);
    a = h * l / 2;
    printf("The area of the triangle is:%f",a);
    return 0;
}
