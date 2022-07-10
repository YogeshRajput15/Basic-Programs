#include<stdio.h>
#include<string.h>
int main()
{

char Arr[5]={'A','B','C','D','\0'};

char Brr[5]="ABCD";

printf("%s\n",Arr);

printf("%s\n",Brr);

printf("%c\n",Arr[0]);
printf("%c\n",Arr[1]);
printf("%c\n",Arr[2]);
printf("%c\n",Arr[3]);

printf("Size of string of Arr :%d\n",sizeof (Arr));
printf("Size of string of Arr :%d\n",sizeof (Brr));

printf("Length of string is %d\n",strlen(Arr));
printf("Length of string is %d\n",strlen(Brr));
    return 0;
}