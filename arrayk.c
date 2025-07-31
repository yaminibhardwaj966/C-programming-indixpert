#include <stdio.h>
int main() 
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i;

    printf("\nNumbers less than 5:\n");
    for (i = 0; i < 5; i++) {
        if (arr[i] < 5) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n\nNumbers greater than 5:\n");
    for (i = 0; i < 10; i++) {
        if (arr[i] > 5) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
