//swap to numbers

#include<stdio.h>
main()
    {
int number1,number2,number3;
    printf("Enter numbers\t");
    scanf("%d%d",&number1,&number2);
    printf("Numbers before swap %d%d\n",number1,number2);

    number3=number1;
    number1=number2;
    number2=number3;
    
    printf("Numbers after swap %d%d\n",number1,number2);
    
    }
