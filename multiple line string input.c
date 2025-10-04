#include<stdio.h>
int main()
{
    char n[50];
    printf("Enter your full name:");
    scanf("%[^'.']s",n);
    printf("%s",n);
    return 0;
}
