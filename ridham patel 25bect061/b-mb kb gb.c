#include <stdio.h>
int main()
{
    float b,kb,mb,gb;
    printf("Enter the value in bytes:\n");
    scanf("%f",&b);
    kb = b / 1024;
    mb = b / 1048576;
    gb = b / 1073741824;
    printf("value in Kb:%f\n",kb);
    printf("value in Mb:%f\n",mb);
    printf("value in Gb:%f\n",gb);
}
