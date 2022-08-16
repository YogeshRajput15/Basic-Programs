#include<iostream>
#include<string.h>

using namespace std;

class base
{
    public:
    int *p;
    base()
    {
        cout<<"Inside default constructor\n";
        p=new int[10];

    }

    base (int i)
    {
        cout<<"Inside Parameterised constructor with one parameter"<<endl;
         p=new int[i];

    }
    base (int i, int j, int k=10)
    {
        cout<<"Inside parameterized constructor with default argument"<<endl;

        p=new int [i+k];   
    }

    base(base &bref)
    {
        cout<<"Inside copy constructor"<<endl;
        p=new int[40];
        memcpy(p,bref.p,40);

    }
    ~base()
    {
        cout<<"Inside Destructor"<<endl;
    }
};

int main()
{

    base obj1;

    base obj2(obj1);

    base obj3(10);

    base obj4(10,20);

    return 0;
}


