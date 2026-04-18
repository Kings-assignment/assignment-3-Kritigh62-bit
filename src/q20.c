// Write a function named calculateGCD that takes two integers as input and returns their greatest common divisor (GCD).
#include <stdio.h>
int calculateGCD(int a, int b);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD of %d and %d is %d\n", a, b, calculateGCD(a, b));

    return 0;
}

// Function definition
int calculateGCD(int a, int b) {
    int i, gcd = 1;

    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}