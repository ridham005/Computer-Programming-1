#include<stdio.h>
int main()
{
    int entered_number, sum, i, n;
    printf("Enter the number of n odd numbers you want to add: ");
    scanf("%d",&entered_number);
    n = 1;
    sum = 1;
    for(i=1;i<entered_number;i++)
    {
        n = n + 2;
        sum = sum + n;

    }
    printf("The sum of first %d odd numbers is %d",entered_number,sum);
}
