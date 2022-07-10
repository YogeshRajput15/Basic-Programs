//usage sizeof operator

#include<stdio.h>
int main()
{
    printf("Character takes %d byte in memory\n",sizeof(char));
    printf("Interger takes %d byte in memory\n",sizeof(int));
    printf("float takes %d byte in memory\n",sizeof(float));
    printf("long takes %d byte in memory\n",sizeof(long));
    printf("Double takes %d byte in memory\n",sizeof(double));


    return 0;
}