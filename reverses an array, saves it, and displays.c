#include <stdio.h>

int main() {
    int n;

    // 1. Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], reversed[n];

    // 2. Input the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Reverse the array and save into another array
    for (int i = 0; i < n; i++) {
        reversed[i] = arr[n - 1 - i];
    }

    // 4. Display the reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");

    return 0;
}
