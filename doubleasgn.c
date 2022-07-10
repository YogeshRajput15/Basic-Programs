#include<stdio.h>
int main()
{
double arr[]={12.3,1.23,12.8};
double *p=arr;
double *q=&(arr[0]);
double *r=&(arr[3]);
printf("%d\n",&r);
printf("%d\n",&q);

printf("%d\n",sizeof(double));
    return 0;
    
}