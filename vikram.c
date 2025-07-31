#include <stdio.h>

int main() {
    int numbers[10];
    int i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nNumbers less than 5 are:\n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] < 5) {
            printf("%d ", numbers[i]);
        }
    }

    printf("\n\nNumbers more than 5 are:\n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] > 5) {
            printf("%d ", numbers[i]);
        }
    }

    return 0;
}