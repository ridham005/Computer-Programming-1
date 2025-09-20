
#include <stdio.h>
int main() {
    int N, D;
    printf("Enter number (N): ");
    scanf("%d", &N);
    printf("Enter divisor (D): ");
    scanf("%d", &D);

    if(D == 0) {
        printf("Division by zero is not allowed.\n");
    } else if(N % D == 0) {
        printf("%d is Divisible by %d\n", N, D);
    } else {
        printf("%d is NOT Divisible by %d\n", N, D);
    }

    return 0;
}
