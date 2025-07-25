#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[] = "output.txt";

    // Open file in write mode
    fptr = fopen(filename, "w");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write data to file
    fprintf(fptr, "This is a sample line written to the file.\n");
    fprintf(fptr, "You can write more lines using fprintf().\n");

    // Close the file
    fclose(fptr);

    printf("Data successfully written to %s\n", filename);

    return 0;
}
