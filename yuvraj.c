#include<stdio.h>
int main()
{
    int num[10];
    
        printf("please enter any ten numbers:");
        for(int n=0;n<10;n++)
        {
            scanf("%d",&num[n]);
        }
        for(int n=0;n<10;n++)
        {
            if(num[n]<5)
            {
                printf("\n%d is less than five",num[n]);
            }
            else
            {
                printf("\n%d is greater or equals to five",num[n]);
            }
        }
    return 0;
}