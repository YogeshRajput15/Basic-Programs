//Set the corresponding bits


#include<stdio.h>
int main()
{
    int val,key;
    printf("Enter two numbers\t");
    scanf("%d%d",&val,&key);
    val=val|key;
    printf("Afdter setting bits result is %d",val);

    return 0;
}