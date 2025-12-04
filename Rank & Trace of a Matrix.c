#include <stdio.h>

// Function to calculate trace of a square matrix
int trace(int A[10][10], int n) {
    int t = 0;
    for(int i = 0; i < n; i++)
        t += A[i][i];
    return t;
}

// Function to calculate rank of a matrix using simple Gaussian elimination
int rankMatrix(int A[10][10], int row, int col) {
    int rank = col;

    for (int r = 0; r < rank; r++) {
        if (A[r][r] != 0) {
            for (int i = 0; i < row; i++) {
                if (i != r) {
                    float mult = (float)A[i][r] / A[r][r];
                    for (int j = 0; j < rank; j++)
                        A[i][j] -= mult * A[r][j];
                }
            }
        } else {
            int reduce = 1;
            for (int i = r + 1; i < row; i++) {
                if (A[i][r] != 0) {
                    for (int j = 0; j < col; j++) {
                        int temp = A[r][j];
                        A[r][j] = A[i][j];
                        A[i][j] = temp;
                    }
                    reduce = 0;
                    break;
                }
            }
            if (reduce) {
                rank--;
                for (int i = 0; i < row; i++)
                    A[i][r] = A[i][rank];
            }
            r--;
        }
    }

    return rank;
}

int main() {
    int A[10][10], r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    // Copy matrix for rank calculation
    int B[10][10];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            B[i][j] = A[i][j];

    // Trace (only square matrices)
    if(r == c)
        printf("\nTrace of the matrix = %d\n", trace(A, r));
    else
        printf("\nTrace not possible (matrix is not square)\n");

    // Rank
    printf("Rank of the matrix = %d\n", rankMatrix(B, r, c));

    return 0;
}
