#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

    // Display the sum
    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
