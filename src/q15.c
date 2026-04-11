// Write a function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.
#include <stdio.h>

// Function prototype
int countOccurrences(char str[], char ch);

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);  // space before %c handles newline issue

    printf("Character '%c' occurs %d times.\n", ch, countOccurrences(str, ch));

    return 0;
}

// Function definition
int countOccurrences(char str[], char ch) {
    int i = 0, count = 0;

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    return count;
}
