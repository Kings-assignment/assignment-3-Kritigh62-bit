//  Write a function named isPalindrome that takes a string as input and returns 1 if it is a palindrome (reads the same forwards and backwards), and 0 otherwise.
#include <stdio.h>

int isPalindrome(char str[]) {
    int i = 0, length = 0;

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; // Not palindrome
        }
    }

    return 1; // Palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("%d\n", isPalindrome(str));

    return 0;
}