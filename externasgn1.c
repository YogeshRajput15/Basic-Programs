#include<stdio.h>
extern int i;
extern int j;
extern int x;
extern int y;
void gun();
int main()
{
printf("Inside main");

gun();
    return 0;
}
int i=21;
void gun()
{

    printf("Inside gun");
}