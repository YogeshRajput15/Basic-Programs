#include<iostream>
using namespace std;

class Demo
{
public:
int Addition(int no1,int no2)
{
    int ans =0;
    ans=no1+no2;
    return ans;

}
int Addition(int no1,int no2,int no3)
{
    int ans =0;
    ans=no1+no2+no3;
    return ans;

}

int Addition(int no1,int no2,int no3,int no4) 
{
    int ans =0;
    ans=no1+no2+no3+no4;
    return ans;

}

};
int main()
{
Demo obj;
int ret=0;

ret= obj.Addition(10,11);
cout<<"Addition is :"<<ret<<"\n";

ret= obj.Addition(10,11,45);
ret= obj.Addition(10,11,36,15);
cout<<"Addition is :"<<ret<<"\n";


    return 0;
}