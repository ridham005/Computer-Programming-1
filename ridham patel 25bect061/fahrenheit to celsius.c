#include <stdio.h>
int main()
{
    float f,c;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f",&f);
    f = f - 32;
    c = f * 5/9;
    printf("The value in celsius:%f",c);
    return 0;

}
