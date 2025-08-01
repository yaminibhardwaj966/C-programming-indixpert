#include <stdio.h>

int main() {
    int num[10];

    printf("please enter 10 number:\n");
    for(int i = 0; i < 10; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &num[i]);
    }

    printf("\n5 se chhote number:\n");
    for(int i = 0; i < 10; i++) {
        if(num[i] < 5) {
            printf("%d ", num[i]);
        }
    }

    // 5 se bade number
    printf("\n\n5 se bade number:\n");
    for(int i = 0; i < 10; i++) {
        if(num[i] > 5) {
            printf("%d ", num[i]);
        }
    }

    return 0;
}
