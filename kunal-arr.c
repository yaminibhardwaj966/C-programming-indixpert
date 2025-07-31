#include<stdio.h>
int main(){

    int num[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d",&num);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (num>5)
        {
            printf("\n%d",num);
        }
        
    
    }
return 0;   
}