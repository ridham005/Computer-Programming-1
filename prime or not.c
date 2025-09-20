#include <stdio.h>
int main() {
    int num, i, n = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1) {
        n = 0;
    } else {
        for(i = 2; i*i <= num; i++) {
            if(num % i == 0) {
                n = 0;
                break;
            }
        }
    }

    if(n)
        printf("%d is a Prime number\n", num);
    else
        printf("%d is NOT a Prime number\n", num);

    return 0;
}
