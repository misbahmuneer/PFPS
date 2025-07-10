#include <stdio.h>

int main() {
    char str[100];  // Declare character array

    printf("Enter a string: ");
    scanf("%s", str);  // Reads input until space or newline

    printf("You entered: %s\n", str);

    return 0;
}
