#include <stdio.h>

int main() {
    int i;
    printf("Enter how many numbers you want to enter: ");
    scanf("%d", &i);

    if (i <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        for (i = 1; i <= i; ++i) {
            printf("%d ", i);
        }
    }

    return 0;
}
