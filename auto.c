#include<stdio.h> 
void fun(int I)
{
auto int i;
auto int j= 10;
printf("Scope of auro variables starts from here i function fun\n");
printf("\nDefalt valure of unintialised auto variable is %d",i);
printf("\nScope of auto variables ends here in function fun\n");
}
int main(){
fun(10);
return 0;
}