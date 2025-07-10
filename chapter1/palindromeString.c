#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);  // Reads string until space

    // Find string length manually
    while (str[i] != '\0') {
        i++;
    }

    j = i - 1;  // Last index

    // Check palindrome
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
