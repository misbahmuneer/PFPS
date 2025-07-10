#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads full line including spaces

    // Calculate length manually (excluding newline if present)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Display string in reverse
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
