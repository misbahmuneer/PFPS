#include <stdio.h>

int main() {
    FILE *file;
    char line[256];

    // Open file in read mode
    file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Error: File not found.\n");
        return 1;
    }

    printf("File Contents:\n");

    // Read and print line by line
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
