#include <stdio.h>

 int main()
 {
     float grams,kilograms;
     printf("Enter grams:");
     scanf("%f",&grams);
     kilograms = grams / 1000;
     printf("%f / 1000 = %f\n",grams,kilograms);
     return 0;
 }

