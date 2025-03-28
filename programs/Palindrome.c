#include <stdio.h>
#include <string.h>

int main() {
    char word[100], reversed[100];
    int length, flag = 1;  // Initialize flag as 1 (assume palindrome)

    printf("Enter the word or number: ");
    scanf("%s", word);  // Use %s for string input

    length = strlen(word);

    // Reversing the word or number
    for (int i = 0; i < length; i++) {
        reversed[i] = word[length - i - 1];
    }
    reversed[length] = '\0';  // Adding null terminator

    // Checking for palindrome
    for (int i = 0; i < length; i++) {
        if (word[i] != reversed[i]) {
            flag = 0;  // Not a palindrome
            break;
        }
    }

    // Display the result
    if (flag == 1) {
        printf("It is a palindrome.\n");
    } else {
        printf("It is not a palindrome.\n");
    }

    return 0;
}
