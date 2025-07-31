#include <stdio.h>
int main()
{
    int num[10], flag = 0;
    printf("enter ten number :");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (num[i] > 5)
        {

            printf("%d", num[i]);
        }
    }

    return 0;
}