#include <stdio.h>
#include <string.h>  // Required for string functions

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];

    // 1. strlen()
    printf("Length of str1 = %lu\n", strlen(str1));  // %lu for size_t

    // 2. strcpy()
    strcpy(str3, str1);  // Copy str1 into str3
    printf("After strcpy, str3 = %s\n", str3);

    // 3. strcat()
    strcat(str1, str2);  // Concatenate str2 to str1 → str1 becomes "HelloWorld"
    printf("After strcat, str1 = %s\n", str1);

    // 4. strcmp()
    int cmp = strcmp("apple", "banana");  // Compare two strings
    if (cmp == 0)
        printf("Strings are equal.\n");
    else if (cmp < 0)
        printf("apple comes before banana.\n");
    else
        printf("apple comes after banana.\n");


    return 0;
}
