#include<iostream>
using namespace std ;

class student{
    public : 
    string name;
    string roll_no;
    string mob_no;

    student(string a)
    {
        name = a;
    }
    student(string b)
    {
        roll_no =b;
    }
    student(string c)
    {
        mob_no = c;
    }

};
int main()
{
  student s("jay");

  cout<<s.name<<endl;
   student s("4126");
  cout<<s.roll_no<<endl;

   student s("7991214531");
   cout<<s.mob_no<<endl;
    
}