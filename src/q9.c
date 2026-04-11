// Implement a C program to count the occurrence of a specific character in a string.
#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Enter the character to count: ");
    scanf(" %c", &ch);   // space before %c handles leftover newline

    // Count occurrences
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("Character '%c' occurs %d times.\n", ch, count);

    return 0;
}
