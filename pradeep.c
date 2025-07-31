#include<stdio.h>
int main()
{
int num[10];
int i , lessthan5 = 0 , greaterthan5 = 0;

    printf("Please Enter 10 Numbers := \n");
    for (int i = 0; i < 10; i++)
    {
      printf("The number are %d:= ", i + 1);
      scanf("%d", &num[i]);

      if (num[i] < 5)
      lessthan5++;

        else  if (num[i] > 5)
         greaterthan5++;
    }
      printf("The Numbers are less than 5: %d\n", lessthan5);
      printf("The Numbers are Greater than 5: %d\n", greaterthan5);
      printf("------------______________-----------");

return 0;
}