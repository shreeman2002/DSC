#include <stdio.h>

int main() {

    // Declaring two arrays
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    // Calculating size of each array
    int sizeA = sizeof(a) / sizeof(a[0]);
    int sizeB = sizeof(b) / sizeof(b[0]);

    // Creating a new array to store concatenation of a and b
    int c[sizeA + sizeB];

    // Copy elements of array a into array c
    for (int i = 0; i < sizeA; i++) {
        c[i] = a[i];  // Copying a[i] to c[i]
    }

    // Copy elements of array b into array c (placed after array a)
    for (int i = 0; i < sizeB; i++) {
        c[sizeA + i] = b[i];  // Copying b[i] after a elements
    }

    // Printing the final concatenated array
    printf("Concatenated array: ");
    for (int i = 0; i < sizeA + sizeB; i++) {
        printf("%d ", c[i]);  // Display each element
    }

    return 0;
}
