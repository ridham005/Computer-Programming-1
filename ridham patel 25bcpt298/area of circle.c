#include <stdio.h>
int main()
{
    float r,a;
    printf("Enter the value of radius of the circle: ");
    scanf("%f",&r);
    a = r * r * 22/7;
    printf("The area of circle is:%f",a);
    return 0;
}
