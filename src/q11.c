// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.
#include <stdio.h>

// Function to calculate average
float calculateAverage(int arr[], int size) {
    int i;
    int sum = 0;

    for (i = 0; i < size; i++) {
        sum += arr[i];
    }

    return (float)sum / size;
}

int main() {
    int arr[100], n, i;
    float avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    avg = calculateAverage(arr, n);

    printf("Average = %.2f\n", avg);

    return 0;
}