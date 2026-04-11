//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.
#include <stdio.h>

// Function returns int but is used for printing factorial series
int calculateFactorialSeries(int n) {
    int i, j, fact;

    printf("Factorial series: ");

    for (i = 1; i <= n; i++) {
        fact = 1;

        for (j = 1; j <= i; j++) {
            fact = fact * j;
        }

        printf("%d ", fact);
    }

    return 0;  // no meaningful value returned
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    calculateFactorialSeries(n);

    printf("\n");

    return 0;
}