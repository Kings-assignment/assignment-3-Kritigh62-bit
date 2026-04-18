// Write a recursive function named calculateFibonacci that takes an integer n as input and returns the nth Fibonacci number. The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the two preceding numbers.
#include <stdio.h>

int calculateFibonacci(int n);

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (i = 0; i < n; i++) {
        printf("%d ", calculateFibonacci(i));
    }

    printf("\n");

    return 0;
}

// Recursive function 
int calculateFibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return calculateFibonacci(n - 1) + calculateFibonacci(n - 2);
}