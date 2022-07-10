//find sum of digits of a given number


#include<stdio.h>
int num,sum=0,digit;
int main ()
{
printf("Enter the number\t");
scanf("%d",&num);
while(num!=0)
{
    digit=num%10;
    sum=sum+digit;
    num=num/10;

}
printf("Sum of digits is %d",sum);


    return 0;
}