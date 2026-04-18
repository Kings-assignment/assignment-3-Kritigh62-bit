#include <stdio.h>

int calculateGCD(int a, int b);

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("GCD of %d and %d is %d\n", a, b, calculateGCD(a, b));

    return 0;
}

int calculateGCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return calculateGCD(b, a % b);
}