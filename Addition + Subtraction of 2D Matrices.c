#include <stdio.h>

int main() {
    int A[10][10], B[10][10], Add[10][10], Sub[10][10];
    int r, c;

    // Input size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

    // ------ Addition ------
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            Add[i][j] = A[i][j] + B[i][j];
        }
    }

    // ------ Subtraction ------
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            Sub[i][j] = A[i][j] - B[i][j];
        }
    }

    // Print Addition
    printf("\nAddition of matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d  ", Add[i][j]);
        }
        printf("\n");
    }

    // Print Subtraction
    printf("\nSubtraction of matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d  ", Sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
