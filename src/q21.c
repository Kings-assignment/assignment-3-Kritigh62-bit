// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.
#include <stdio.h>

int calculateFactorial(int n);

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is %d\n", n, calculateFactorial(n));

    return 0;
}

// Recursive function 
int calculateFactorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * calculateFactorial(n - 1);
}