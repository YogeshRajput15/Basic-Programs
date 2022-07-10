#include<stdio.h>
int fun()
{
auto int i=10;
register int j=20;
int ret=i+j;
return ret;
}
int main ()
{
    printf("Inside main");

fun();
return 0;





}