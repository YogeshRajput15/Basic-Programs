//set perticular bit in a given number 

#include<stdio.h>
int main()
{
int num,bit,temp;
printf("Enter number\t");
scanf("%d",&num);
printf("Enter the bit number to be set\t");
scanf("%d",&bit);
temp=1<<(bit-1);
num=num|temp;
printf("Value after setting bit is %d",num);
    return 0;
}