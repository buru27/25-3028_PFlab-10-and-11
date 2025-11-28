#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)   // base case
        return 0;
    return (n % 10) + sumOfDigits(n / 10);   // recursive step
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Sum = %d", sumOfDigits(n));
    return 0;
}

