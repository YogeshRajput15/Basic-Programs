#include<iostream>
using namespace std;

class Hello
{
    public:
    void fun()
};

class Demo
{

    public:
    int i;
    protected:
    int j;
    private:
    int k;

    public:
    Demo()
    {
        i=10;
        j=20;
        k=30;
    }
      friend void Hello:: fun();  //friend function
};
class Hello
{
    public:
    void fun()
{
    Demo obj1;
    cout<<obj1.i<<"\n";
    cout<<obj1.j<<"\n"; //error without friend fun
    cout<<obj1.k<<"\n"; //error without friend fun


}
};

int main()
{
    Hello hobj;
    hobj.fun();
    fun();

    Demo obj;

    return 0;
}