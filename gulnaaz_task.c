#include <stdio.h>
int main()
{
    int num[10];

    printf("enter any ten numbers: ");
    for(int i=0; i<10; i++)
    {
        scanf("%d ",&num[i]);
    }

    printf("The Numbers is Greather Than five: ");
    for(int i=0; i<10; i++)
    {
        if(num[i]>5)
        {
            printf("%d ", num[i]);
        }
    }
    printf("\n");

    printf("The Numbers is Less Than five: ");
    for(int i=0; i<10; i++)
    {
        if(num[i]<5)
        {
            printf("%d ", num[i]);
        }
    }
    printf("\n");

    return 0;
}