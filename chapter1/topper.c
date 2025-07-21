#include <stdio.h>

#define MAX 100

// Structure to store student data
struct Student {
    int rollNo;
    float marks;
};

int main() {
    struct Student students[MAX];
    int n, i, topperIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input data for all students
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks  : ");
        scanf("%f", &students[i].marks);
    }

    // Find the topper
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Display topper details
    printf("\n--- Topper of the Class ---\n");
    printf("Roll No: %d\n", students[topperIndex].rollNo);
    printf("Marks  : %.2f\n", students[topperIndex].marks);

    return 0;
}
