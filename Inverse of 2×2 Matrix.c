#include <stdio.h>

int main() {
    float A[2][2], inv[2][2], det;

    // Input 2x2 matrix
    printf("Enter elements of 2x2 matrix:\n");
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%f", &A[i][j]);

    // Calculate determinant
    det = A[0][0]*A[1][1] - A[0][1]*A[1][0];

    if(det == 0) {
        printf("Matrix is singular, inverse does not exist.\n");
        return 0;
    }

    // Calculate inverse
    inv[0][0] =  A[1][1] / det;
    inv[0][1] = -A[0][1] / det;
    inv[1][0] = -A[1][0] / det;
    inv[1][1] =  A[0][0] / det;

    // Print inverse
    printf("\nInverse of the matrix is:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            printf("%.2f\t", inv[i][j]);
        printf("\n");
    }

    return 0;
}
