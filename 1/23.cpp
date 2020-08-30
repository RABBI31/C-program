#include<iostream>
using namespace std;
class A
{
public:
    virtual void disp()=0;

    virtual void show()
    {
        cout<<"rabeya";
    }
};
class B:public A
{
public:
    void disp()
    {
        cout <<"mohiuddin";

    }
    void show()
    {
        cout<<"eva";
    }
};
int main()
{
    A *p;

    B objd;

    p=&objd;
    p-> disp();
    p-> show();
}
