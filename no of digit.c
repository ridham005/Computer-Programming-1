#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int c=0;
    do
    {
        c++;

        n=n/10;
    }while(n>0);
    printf("%d",c);

}
