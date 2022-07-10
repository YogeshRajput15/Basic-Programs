#include<stdio.h>
struct Demo
{
int iNo;
float fValue;
int iValue;

};

int main()
{
struct Demo obj;
obj.iNo=15;
obj.fValue=25.55;
obj.iValue=76;

printf("%d\n",obj.iNo);
printf("%d\n",sizeof(obj));


    return 0;
}