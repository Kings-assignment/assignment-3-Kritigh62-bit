// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.
#include <stdio.h>
#include <string.h>

void calculateBinary(int n, char *result) {
    if (n == 0)
        return;

    calculateBinary(n / 2, result);

    char bit = (n % 2) + '0';
    int len = strlen(result);
    result[len] = bit;
    result[len + 1] = '\0';
}

int main() {
    int n;
    char result[32] = "";

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0) {
        strcpy(result, "0");
    } else {
        calculateBinary(n, result);
    }

    printf("Binary representation: %s\n", result);

    return 0;
}