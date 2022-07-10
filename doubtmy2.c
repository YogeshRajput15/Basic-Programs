#include<stdio.h>
#include<stdlib.h>

struct outer
{
    float f;
    int i;
    struct inner
    {
        int x;
        int y;

    };
};
union Demo
{
    int no;
    char *ch;
    double d;

};
int main()
{

int Arr[3][2]={1,2,3,4,5,6};
 
   

 Arr[0][0];
*(*(Arr+0) + 0)


    2[Arr]
    *(Arr+2)
    printf("%d\n",sizeof(no));
    
    printf("%d\n",Arr[2][2]);




    return 0;
}
