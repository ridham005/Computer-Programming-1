#include<stdio.h>
int main()
{
    int entered_number, sum, i, n;
    printf("Enter the number of n even numbers you want to add: ");
    scanf("%d",&entered_number);
    n = 0;
    sum = 0;
    for(i=1;i<entered_number;i++)
    {
        n = n + 2;
        sum = sum + n;

    }
    printf("The sum of first %d even numbers(including 0) is %d",entered_number,sum);
}
