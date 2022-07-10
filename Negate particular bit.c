//Negate a particular bit in a given number

#include<stdio.h>
int main()
{

    int num,bit,temp;
    printf("Enter number\t");
    scanf("%d",&bit);
    temp=1<<(bit-1);
    num=num^temp;
    printf("Value after negating bit is %d",num);
}