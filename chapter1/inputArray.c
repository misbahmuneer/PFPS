#include <stdio.h>

int main() {
    int n;

    // Ask user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Input elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("\nArray elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
