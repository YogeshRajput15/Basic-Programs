#include<iostream>
using namespace std;

int main()
{
  int Arr[10];
  int *p= NULL;

  p= new int[10];
  if(p==NULL)
  {
      cout<<"Unable to allocate  the memory\n";

  }
else
{
    cout<<"Memory get allocated successfully at address:"<<p<<"\n";

}

    delete []p;

    return 0;
}