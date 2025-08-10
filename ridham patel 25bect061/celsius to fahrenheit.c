#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in celsius:");
    scanf("%f",&c);
    f = c * 9/5;
    f = f +32;
    printf("the value in fahrenheit : %f",f);
    return 0;
}
