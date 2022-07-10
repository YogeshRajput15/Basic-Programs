#include<stdio.h>
int main()
{
int iValue=11;
char cValue='Y';
float fValue= 15.11;
double dValue=33.22;

void *ptr = NULL;

ptr =&iValue;
printf("%d\n",*(int *)ptr);

ptr=NULL;
ptr= &cValue;
printf("%d\n",*(char *)ptr);

ptr=NULL;
ptr=&fValue;
printf("%d\n",*(float *)ptr);

ptr=NULL;
ptr=&dValue;
printf("%d\n",*(double *)ptr);









    return 0;
}