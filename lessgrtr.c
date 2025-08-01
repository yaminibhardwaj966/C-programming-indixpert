int main() {
    int i, number;

    
    printf("Numbers from 1 to 10:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }


    printf("\n\nEnter a number between 1 and 10: ");
    scanf("%d", &number);

    
    if (number < 1 || number > 10)
     {
        printf("Invalid number! Please enter a number between 1 and 10.\n");
    } else {
    
        if (number < 5) {
            printf("The number %d is less than 5.\n", number);
        } else if (number > 5) {
            printf("The number %d is greater than 5.\n", number);
        } else {
            printf("The number is exactly 5.\n");
        }
    }

    return 0;
}