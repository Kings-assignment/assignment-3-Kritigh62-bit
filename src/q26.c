// Write a recursive function named reverseString that takes a string as input and returns the reversed string.
#include <stdio.h>

// Function prototype
void reverseString(char str[], int start, int end);

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    // find length manually
    while (str[length] != '\0') {
        length++;
    }

    reverseString(str, 0, length - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}

// Recursive function definition
void reverseString(char str[], int start, int end) {
    char temp;

    if (start >= end)
        return;

    temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}