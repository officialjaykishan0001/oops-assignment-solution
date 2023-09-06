#include<iostream>
using namespace std;

class av{
  int a;
  int b;

  public : 
  void setter(int x ,int y)
  {
    a = x;
    b = y;
  }

  int getter()
  {
    cout<<"a is  : "<<a<<"b is : "<<b<<endl;

  }

};
int main()
{
   av x;
   x.setter(4,34);

   x.getter();

    return 0;
}