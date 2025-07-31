#include <stdio.h>
int main()
{
    int number[10]={1,2,3,4,5,6,7,8,9,10};
    int num, found=1;
    printf("please enter 1 to 10 number: ");
    scanf("%d", &num);
    for(int i= 0;i<=10;i++){
        if(number[i]==num){
            found=1;
            break;
        }
    }
   if(!found){
    printf("kripya 1 se 10 ke beech ka number dijiye.\n");
   }else 
   {
    if(num<5){
        printf("%d-- ye 5 se chota hai.\n",num);
    }else if (num>5)
    {
        printf("%d--ye 5 se bada hai.\n",num);
    }else{
        printf("%d--ye 5 kr barabar hai.\n",num);
    }
    
   }
   
       
    return 0;
}