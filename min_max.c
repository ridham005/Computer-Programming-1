#include<stdio.h>
int main()
{
    int i,n,m,M;
    for(i=1;i<=10;i++){

    printf("Enter the number: ");
    scanf("%d",&n);
    if(i==1)
        m=M=n;
    if(n>M)
        M=n;
    if(n<m)
        m=n;
    }
    printf("The maximum number is: %d\n",M);
    printf("The minimum number is: %d",m);
    return 0;
}
