#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reads full line (including spaces)

    // Count length manually (excluding the newline character if present)
    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }

    printf("Length of the string is: %d\n", i);

    return 0;
}
