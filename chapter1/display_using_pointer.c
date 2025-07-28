#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;
    int size = sizeof(arr) / sizeof(arr[0]);

    ptr = arr;  // pointer to the first element

    printf("Array contents:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}
