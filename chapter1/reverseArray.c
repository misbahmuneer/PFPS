#include <stdio.h>

int main() {
    int n;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Display array in reverse
    printf("\nArray elements in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
