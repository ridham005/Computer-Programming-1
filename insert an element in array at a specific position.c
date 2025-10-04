#include<stdio.h>
int main()
{
    int a[50],noofelements,position,value,i;
    printf("Enter the No of elements wanted in the array:");
    scanf("%d",&noofelements);
    printf("Enter %d elements:",noofelements);
    for(i=0;i<noofelements;i++)
        scanf("%d",&a[i]);
    printf("Enter the position where you want to enter a new element(starting position is 0):");
    scanf("%d",&position);
    printf("Enter the value of element:");
    scanf("%d",&value);
    for(i=noofelements-1;i>=position;i--)
        a[i+1]=a[i];
    a[position]=value;
    printf("The final array is:");
    for(i=0;i<=noofelements;i++)
        printf("%d",a[i]);
    return 0;
}
