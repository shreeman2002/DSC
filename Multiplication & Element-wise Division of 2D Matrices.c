#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    float A[10][10], B[10][10], Mul[10][10], Div[10][10];

    // Input size of first matrix
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    // Input elements of Matrix A
    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%f", &A[i][j]);

    // Input size of second matrix
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Input elements of Matrix B
    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            scanf("%f", &B[i][j]);

    // --------- Multiplication ---------
    if(c1 != r2) {
        printf("\nMatrix multiplication not possible (columns of A != rows of B).\n");
    } else {
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++) {
                Mul[i][j] = 0;
                for(int k = 0; k < c1; k++) {
                    Mul[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Print multiplication result
        printf("\nMatrix Multiplication (A x B):\n");
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c2; j++)
                printf("%.2f\t", Mul[i][j]);
            printf("\n");
        }
    }

    // --------- Element-wise Division ---------
    if(r1 != r2 || c1 != c2) {
        printf("\nElement-wise division not possible (different sizes).\n");
    } else {
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                if(B[i][j] != 0)
                    Div[i][j] = A[i][j] / B[i][j];
                else
                    Div[i][j] = 0; // handle division by zero
            }
        }

        // Print division result
        printf("\nElement-wise Division (A / B):\n");
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++)
                printf("%.2f\t", Div[i][j]);
            printf("\n");
        }
    }

    return 0;
}
