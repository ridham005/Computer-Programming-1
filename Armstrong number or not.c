#include <stdio.h>

int main() {
    int num, a[50], i, j, c = 0;
    long long result[10000],sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num;


    do {
        c++;
        n = n / 10;
    } while (n > 0);


    n = num;
    for (i = 0; i < c; i++) {
        a[i] = n % 10;
        n /= 10;
    }


    for (i = 0; i < c; i++) {
        result[i] = 1;
        for (j = 0; j < c; j++) {
            result[i] = result[i] * a[i];
        }

    }
      for (i = 0; i < num; i++) {
        sum = sum + result[i];

    }
      if(sum==num)
        printf("The number %d is an Armstrong number",num);
      else
        printf("The number %d is not an Armstrong number",num);
    return 0;
}
