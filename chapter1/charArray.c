#include <stdio.h>

int main() {
    char str[100];  // Character array with max size 100

    printf("Enter a string: ");
    scanf("%s", str);  // Reads a string until whitespace

    printf("You entered: %s\n", str);

    return 0;
}
