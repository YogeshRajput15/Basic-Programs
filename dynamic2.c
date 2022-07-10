#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    int *ptr = NULL;
    
    
    ptr=(int*)malloc(5 * sizeof(int));

    ptr=(int *)realloc(ptr, 7*sizeof(int));

    ptr=(int *)realloc(ptr, 3*sizeof(int));
    
    
        printf("Enter the no of elements:");

        scanf("%d\n",&size);
    
    
}