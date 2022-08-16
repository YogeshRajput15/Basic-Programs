#include<iostream>
using namespace std;

class Base
{
    public:
    //1000
    int x,y;

    void fun()
    {
        cout<<"Base fun\n";
    }

    virtual void gun()
    {
        cout<<"Base gun\n";
    }
    
    virtual void sun()
    {
        cout<<"Base sun\n";
    }

    virtual void run()=0;
};

class Derived:public Base
{
    public:
    int i,j;

    void fun()
    {
        cout<<"Derived fun\n";
      }
      virtual void gun()
    {
        cout<<"Derived gun\n";
      }

      void run()
    {
        cout<<"Derived run\n";
      }
};


int main()
{
   // Base bobj;  not allowed
    Derived dobj;   //allowed

    Base *bp = NULL;
    bp=&dobj; //upcasting

    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    bp-> fun();
    bp-> gun();
    bp-> sun();
    bp-> run();

    return 0;
}