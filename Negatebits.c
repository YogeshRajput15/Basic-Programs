//Negate the corresponding bits

#include<stdio.h>
int main()
{
int val,key;
printf("Ener two numbers\t");
scanf("%d%d",&val,&key);
val=val^key;
printf("After negating bits result is %d",val);



    return 0;
}