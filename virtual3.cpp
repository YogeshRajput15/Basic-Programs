#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;

    void fun()
    {
        cout<<"Base fun"<<"\n";

    }
    void gun()
    {
        cout<<"Base gun"<<"\n";
        
    }
};

class Derived: public Base
{
    public:
        int i,j;
        void sun()
        {
            cout<<"Derived sun"<<"\n";
        }
        
        void fun()
        {
            cout<<"Derived fun"<<"\n";
        }
};

int main()
{
    Base *bp = new Derived();
    bp->fun();
    bp->gun();
 //   bp->sun();

    cout<<sizeof(Base)<<"\n";
        cout<<sizeof(Derived)<<"\n";

    return 0;
}

