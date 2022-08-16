#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    const int j;

    Demo(int a, int b):j(b)
    {
        i=a;
    }

    void fun()
    {
        cout<<"inside fun\n";
        i++;  //allowed
       // j++; not allowed
        cout<<i<<"\n";
    }
    void gun(int a, const int b) const
    {
        int x= 10;
        const int y=20;
        cout<<"inside gun\n";
       
       // i++; not allowed  bcz function is constant
       // j++;  not allowed

         x++;     //allowed
       //y++;     //not allowed
        
         a++;    //allowed
       // b++;    //not allowed
    
    }
};

int main()
{
    Demo obj1(11,21);
    const Demo obj2(11,21);

    obj1.fun();
    obj1.gun(10,20);

    // obj2.fun();  not allowed
    obj2.gun(10,20);
    


    return 0;
}