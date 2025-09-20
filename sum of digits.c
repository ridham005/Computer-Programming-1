#include <stdio.h>

int main()
{
    int a;
    int s=0;
    printf("Enter a number:\n");
    scanf("%d",&a);

    while(a>0)
    {
        s += a % 10;
        a = a/ 10;
    }
    printf("The sum of the digits is:\n%d",s);
    return 0;
}
