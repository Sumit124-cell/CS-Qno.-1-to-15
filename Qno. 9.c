//write a c function to check whether a given string is palindrome or not. use this function to find whether the string entered by user is palindrome or not
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(const char *str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Skip non-alphanumeric characters
        while (start < end && !isalnum(str[start])) {
            start++;
        }
        while (start < end && !isalnum(str[end])) {
            end--;
        }

        // Compare characters (case-insensitive)
        if (tolower(str[start]) != tolower(str[end])) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from input if it exists
    str[strcspn(str, "\n")] = '\0';

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
