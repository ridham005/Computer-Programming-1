#include <stdio.h>
int main()
{
    float l,a,p;
    printf("Enter the length of side of the square:\n");
    scanf("%f",&l);
    a = l * l;
    p = l * 4;
    printf("The area of square is:%f\n",a);
    printf("The perimeter of the square is:%f",p);
    return 0;
}
