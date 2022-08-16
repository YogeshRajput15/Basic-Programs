#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        Base()
     {
         cout<<"inside Base constructor\n";
     }  
     ~Base()
     {
         cout<<"inside destructor\n";
     }

};

class Derived : public Base
{
    public:
    int a,b,c;
    Derived()
    {
        cout<<"inside Derived constructor\n";
    }
    ~Derived()
    {
        cout<<"inside Derived Destructor\n";
    }
};
int main()
{
    Derived dobj;
    return 0;
}