// Write a function named findPrimeNumbers that takes an integer n as input and prints all prime numbers from 1 to n.
#include <stdio.h>

// Function returns int (but only used for printing primes)
int findPrimeNumbers(int n) {
    int i, j, isPrime;

    for (i = 2; i <= n; i++) {
        isPrime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;  // no meaningful value returned
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: ", n);

    findPrimeNumbers(n);

    printf("\n");

    return 0;
}