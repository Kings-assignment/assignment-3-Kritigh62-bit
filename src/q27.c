// Write a recursive function named printTriangle that takes an integer n as input and prints a triangle of asterisks (*) with n rows.
#include <stdio.h>
int printTriangle(int n);

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printTriangle(n);

    return 0;
}

// Recursive function
int printTriangle(int n) {
    if (n == 0)
        return 0;

    printTriangle(n - 1);

    for (int i = 1; i <= n; i++) {
        printf("* ");
    }

    printf("\n");

    return 0;
}