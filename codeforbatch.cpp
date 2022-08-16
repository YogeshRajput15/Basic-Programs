#include<iostream>
using namespace std;

int main()
{
    enum Marvellous_Batches{PPA=0,LB=1,LSP=2,Python=3};
    int Fees[]={15000,16000,17000,18000};
    const float Duration[]={3.4,4.0,3.5,4.5};
    int choice=0;

    cout<<"Select the batch that you want to join\n";
    cout<<"0:PPA\n";
    cout<<"1:LB\n";
    cout<<"2:LSP\n";
    cout<<"3:Python\n";
    cin>>choice;

    cin>>choice;

    switch(choice)
    {
        case PPA:
        cout<<"Thank you for selecting Pre-Placement Activity batch\n";
        cout<<"Duration is: <<Duration[PPA]<<"\n";
        cout<<"Fees are:"<<Fees[PPA]<<"n";
        break:

        case LB:
        cout<<"Thank you for selecting Logic building batch\n";
        cout<<"Duration is: <<Duration[PPA]<<"\n";
        cout<<"Fees are:"<<Fees[PPA]<<"n";
        break:

        case Python:
        cout<<"Thank you for selecting Python  batch\n";
        cout<<"Duration is: <<Duration[PPA]<<"\n";
        cout<<"Fees are:"<<Fees[PPA]<<"n";
        break:
    }





    return 0;
}