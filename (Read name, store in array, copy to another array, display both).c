#include <stdio.h>
#include <string.h>

int main() {
    char name1[50];   // first array
    char name2[50];   // second array

    // Read name from user
    printf("Enter your name: ");
    scanf("%49s", name1);   // read without spaces

    // Copy name1 into name2
    strcpy(name2, name1);

    // Display both arrays
    printf("\nName stored in first array: %s\n", name1);
    printf("Name stored in second array: %s\n", name2);

    return 0;
}
