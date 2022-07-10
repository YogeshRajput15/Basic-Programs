#include<stdio.h>
int main()
{
int no1=15;
int no2=44;
int no3=25;
int no4=32;
int Data[4] = {15,44,25,320};
/*int Data[4];
Data[0] =15;
Data[1]= 44;
Data[2]=25;
Data[3]=32;
*/
printf("Value of no1 is %d\n",no1);
printf("Address of no1 is %d\n",&no1);
printf("first element  of array is  %d\n",Data[0]);
printf("Base address of  array %d\n",Data);
printf("Base address of first element of array is %d\n",&Data[0]);
printf("Base address of second element of array is %d\n",&Data[1]);
printf("Base address of third element array is %d\n",&Data[2]);
printf("Sizeof no1 is %d\n",sizeof(no1));
printf("sizeof  array is %d\n",sizeof(Data));
printf("Sizeof first element of array is %d\n", sizeof(Data[0]));



    return 0;
}