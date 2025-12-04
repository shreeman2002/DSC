#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5, 6};
    int B[] = {3, 4, 5};

    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    int found = 0;

    // Check subarray
    for (int i = 0; i <= sizeA - sizeB; i++) {
        int j;
        for (j = 0; j < sizeB; j++) {
            if (A[i + j] != B[j]) {
                break;
            }
        }

        if (j == sizeB) {   // full match
            printf("Subarray found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Subarray NOT found\n");
    }

    return 0;
}
