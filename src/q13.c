// Write a function named findFactorial that takes an integer as input and returns its factorial.
#include <stdio.h>

int findFactorial(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", findFactorial(n));

    return 0;
}

int findFactorial(int n) {
    int i;
    int fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}