#include <stdio.h>
int main()
{
    float l,b,a,p;
    printf("Enter the length of the rectangle:\n");
    scanf("%f",&l);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%f",&b);
    a = l * b;
    p = l + b;
    p = p * 2;
    printf("The area of rectangle is:%f\n",a);
    printf("The perimeter of the rectangle is:%f",p);
    return 0;
}

