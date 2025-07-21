#include <stdio.h>

// Define a structure for student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s;  // Declare a variable of type struct Student

    // Input student details
    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);
    printf("Enter name: ");
    scanf(" %[^\n]", s.name);  // Reads string with spaces
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display student details
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name       : %s\n", s.name);
    printf("Marks      : %.2f\n", s.marks);

    return 0;
}
