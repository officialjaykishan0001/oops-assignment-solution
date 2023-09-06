#include<iostream>
using namespace std;

class book{
    public: 
    string name;
    int id;

    book()
    {
        name = "computer science";
        id = 12345;
    }
};

int main()
{
    book a;
    cout<<"name : "<<a.name<<"\nid : " <<a.id<<endl;

    book b;
    b.name = "english";

    b.id = 54321;
    cout<<"name : "<<a.name<<"\nid : " <<a.id<<endl;

    
}
/*Jai Jai Jai Bajarangbali ..
this program coded by jay kishan kharwar
at
time : 1:28
date : 05-05-2023*/