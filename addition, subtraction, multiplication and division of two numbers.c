#include <stdio.h>
int main()
{
    float a,b,add,sub,multi,div;
    printf("Enter the value of a :\n");
    scanf("%f",&a);
    printf("Enter the value of b :\n");
    scanf("%f",&b);
    add = a + b;
    sub = a - b;
    multi = a * b;
    div = a / b ;
    printf("addition=%f\n",add);
    printf("subtraction=%f\n",sub);
    printf("multiplication=%f\n",multi);
    printf("division=%f\n",div);
    return 0;
}

