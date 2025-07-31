#include<stdio.h>
int main()
{
    int num;

    printf("Please enter any number b/w 1-10: ");
    scanf("%d", &num);

        if(num<5)
        {
            
            printf("This Number is less than 5");
        }

        if(num>5)
        {
            
            printf("This Number is greater than 5");
        }
    
    return 0;
}