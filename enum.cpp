#include <iostream>
using namespace std;

int main()
{
    int Input=0;
    enum Days {Sun,Mon,Tue,Wed,Thus,Fri,Sat}; 

    enum Days obj;

    obj=Tue;
    
    cout<<obj<<"\n";
    cout<<sizeof(obj)<<"\n";

    enum Gender {Female=1, Male=2};
    cout<<"Enter your Gender\n";
    cout<<"1:Female\n";
    cout<<"2: Male\n";

    cin>>Input;

    switch(Input)
    {
        case Female:
        cout<<"Tax free limit is 3,00,00\n";
        break;
        
        case Male:
        cout<<"Tax free limit is 2,50,000\n";
        break;

        default:
        cout<<"Invalid gender\n";
    }




    return 0;
}