// Write a recursive function named calculatePower that takes two integers base and exponent as input and returns the result of raising the base to the exponent.
#include <stdio.h>

int calculatePower(int base, int exponent) {
    if (exponent == 0)
        return 1;
    return base * calculatePower(base, exponent - 1);
}

int main() {
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Negative exponents not supported.\n");
    } else {
        int result = calculatePower(base, exponent);
        printf("Result: %d\n", result);
    }

    return 0;
}