#include<stdio.h>
int Addition(int,int);

int main()
{
int P=10;
int Q=11;
int R=0;

R=Addition(P,Q);

printf("%d",R);
return 0;
}
int Addition(int No1,int No2)
{
int Answer=0;
Answer=No1+No2;
return Answer;



}
