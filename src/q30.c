//  Write a recursive function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.
#include <stdio.h>
int countOccurrences(char str[], char ch, int i);

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Character '%c' occurs %d times.\n",
           ch, countOccurrences(str, ch, 0));

    return 0;
}

// Recursive function 
int countOccurrences(char str[], char ch, int i) {
    if (str[i] == '\0')
        return 0;

    if (str[i] == ch)
        return 1 + countOccurrences(str, ch, i + 1);
    else
        return countOccurrences(str, ch, i + 1);
}