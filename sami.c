#include <stdio.h>
int main()
{
    int num;
    printf("please enter 1 to 10 number");
    scanf("%d", &num);
    if (num >= 1 && num <= 10)
    {
        if (num == 1)
        {
            printf("this number is less than 5");
        }
        else if (num == 2)
        {
            printf("this number is less than 5");
        }
        else if (num == 3)
        {
            printf("this number is less than 5");
        }
        else if (num == 4)
        {
            printf("this number is less than 5");
        }
        else if (num == 5)
        {
            printf("this number is equal than 5");
        }
        else if (num == 6)
        {
            printf("this number is greater than 5");
        }
        else if (num == 7)
        {
            printf("this number is greater than 5");
        }
        else if (num == 8)
        {
            printf("this number is greater than 5");
        }
        else if (num == 9)
        {
            printf("this number is greater than 5");
        }
        else if (num == 10)
        {
            printf("this number is greater than 5");
        }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}