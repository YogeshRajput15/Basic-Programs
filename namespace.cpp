#include<iostream>

namespace Marvellous
{
    void fun()
    {
        std::cout<<"inside fun\n";

    }
}

int main ()
{
    std::cout<<"Jay Ganesh\n";

    Marvellous::fun();

    return 0;
}