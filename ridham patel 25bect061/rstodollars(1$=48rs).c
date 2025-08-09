#include <stdio.h>

 int main()
 {
     float rupees,dollars;
     printf("Enter rupees:");
     scanf("%f",&rupees);
     dollars = rupees / 48;
     printf("%f / 48 = %f\n",rupees,dollars);
     return 0;
 }


