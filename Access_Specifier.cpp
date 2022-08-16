#include<iostream>

using namespace std;

class demo
{
    public:
    int pub;
    static int i;
   
    private:
    int pri;
    
    protected:
        int pro;

    public:
        demo()
        {
            pub=10;
            pri=20;
            pro=30;
        }

        void fun()
        {
            cout<<endl<<"public member:"<<pub<<endl<<"Private member :"<<pri<<endl<<"Protected member :"<<pro<<endl;
        };
        int demo::i=10;

        int main()
        {
            demo obj;
            cout<<demo::i;

            cout<<"Accessing public members inside main..."<<endl;
            cout<<"Public member :"<<obj.pub;

            cout<<endl<<endl<<"Accessing all the class members using the fun..";
            obj.fun();

            return 0;
        }
        }

}