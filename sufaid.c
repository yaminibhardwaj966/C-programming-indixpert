#include<stdio.h>
int main(){
int number;
printf("please enter 1 to 10 number");
scanf("%d",number);
if(number>=1 && number<=10){
if(number==1){
printf("this number is less than 5");
}else if(number==2){
    printf("this  number is less than 5 ");
}else if(number==3){
    printf("this  number is less than 5 ");
}else if(number==4){
    printf("this  number is less than 5 ");
}else if(number==5){
    printf("this  number is equal than 5 ");
}else if(number==6){
    printf("this  number is greater than 5 ");
}else if(number==7){
    printf("this  number is greater than 5 ");
}else if(number==8){
    printf("this  number is greater than 5 ");
}else if(number==9){
    printf("this  number is greater than 5 ");
}else if(number==10){
    printf("this  number is greater than 5 ");
}
}else{
    printf("invailid");

}

    return 0;
}