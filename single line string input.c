#include<stdio.h>
int main()
{
    char n[50];
    printf("Enter your full name:");
    fgets(n,50,stdin);
    puts("Hello!");
    printf("%s",n);
    return 0;
}
