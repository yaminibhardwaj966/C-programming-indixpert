#include <stdio.h>

int main() {
    int i;
    int lessThan5 = 0;
    int greaterThan5 = 0;

    printf("Numbers from 1 to 10:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
        

    
        if (i < 5) 
        {
            lessThan5++;
        } else if (i > 5) {
            greaterThan5++;
        }
    }

    
    printf("\n\nCount of numbers less than 5: %d\n", lessThan5);
    printf("Count of numbers greater than 5: %d\n", greaterThan5);

    return 0;
}