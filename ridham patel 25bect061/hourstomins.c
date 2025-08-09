#include <stdio.h>

 int main()
 {
     float hours, minutes;
     printf("Enter hours:");
     scanf("%f",&hours);
     minutes = hours * 60;
     printf("%f * 60 = %f\n",hours,minutes);
     return 0;
 }
