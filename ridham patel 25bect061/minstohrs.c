#include <stdio.h>

 int main()
 {
     float minutes, hours;
     printf("Enter minutes:");
     scanf("%f",&minutes);
     hours = minutes / 60;
     printf("%f / 60 = %f\n",minutes,hours);
     return 0;
 }
