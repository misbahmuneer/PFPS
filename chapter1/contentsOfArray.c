#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Declare and initialize the array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate size of array

    printf("Array elements are:\n");

    for (int i = 0; i < n; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
