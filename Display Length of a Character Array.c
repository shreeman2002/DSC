#include <stdio.h>

int main() {
    char name[] = "SHREEMAN";

    int length = sizeof(name) - 1; // remove null character

    printf("Length of the character array = %d\n", length);

    return 0;
}
