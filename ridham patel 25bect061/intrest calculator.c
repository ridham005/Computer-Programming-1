#include <stdio.h>
int main()
{
    float prn,i;
    printf("Enter the principal amount borrowed:\n");
    scanf("%f",&prn);
    i = prn / 100;
    printf("The intrest is:%f",i);
    return 0;
}
