#include<iostream>
using namespace std;

class Demo
{
    public:
    int x;
    int y;

Demo()
{
    cout<<"Inside default constructor\n";

}
~Demo()
{
    cout<<"Inside destructor\n";

}
    void fun()
    {
        cout<<"Inside fun\n";
    }
};

int main()
{
    Demo obj;

    Demo *ptr=NULL;
    ptr=new Demo;
    obj.fun();
    ptr->fun();
    delete ptr;

return 0;
}