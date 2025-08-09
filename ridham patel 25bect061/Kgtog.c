#include <stdio.h>

 int main()
 {
     float grams,kilograms;
     printf("Enter Kgs:");
     scanf("%f",&kilograms);
     grams = kilograms * 1000;
     printf("%f / 1000 = %f\n",kilograms,grams);
     return 0;
 }

