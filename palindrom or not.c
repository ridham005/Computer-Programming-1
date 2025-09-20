#include <stdio.h>

int main()
{
    int n, r = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    int m = n;
    while (n > 0)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    if (r == m)
        printf("palindrom");
    else
        printf("Not Palindrom");

    return 0;
}
