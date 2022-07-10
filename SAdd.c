#include<stdio.h>
int Adddition(i,j,a,d);
int main()
{
int i=2;
int j=4;
float a=22.22;
double d= 11.4235;
int ret=0;
int ans;
int ans1;
ret=Addition(i,j);

ans=i+j;
ret=Addition(a,d);
ans1=a+d;

printf("This is the addition of A+B is %d\n",ans);
printf("this is the addition of C+D is %d\n",ans1);




    return 0;
}