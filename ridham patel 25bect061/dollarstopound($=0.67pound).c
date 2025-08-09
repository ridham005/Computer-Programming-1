#include <stdio.h>

 int main()
 {
     float dollars,pounds;
     printf("Enter dollars:");
     scanf("%f",&dollars);
     pounds = dollars * 48 / 72;
     printf("%f * 48 / 72= %f\n",dollars,pounds);
     return 0;
 }

