#include<stdio.h>
int main()
{
int no1=10;
const int no2=10;
int Arr[4]={10,20,30,40};
const int Brr[4]={10,20,30,40};
no1 ++;
Arr[0]=11;

printf("the value of Arr is:%d\n",Arr[3]);
printf("the value of Arr is:%d\n",Brr[2]);
    return 0;
}