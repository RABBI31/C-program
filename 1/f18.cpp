#include<iostream>
#include<conio.h>
using namespace std;
class A;
class B
{

public:
    int a;
    int getval(int x)
    {
        a=x;
    }
    void putval()
    {
        cout<<a;
    }
    friend int add(A,B);
};
class A
{
    int b;
public:
    int takedata(int y)
    {
        b=y;
    }
     void putva()
    {
        cout<<b;
    }
    friend int add(A,B);
};
int add(A p,B q)
{
    cout<<p.b+q.a;
}
int main()
{
    A obj1;
    B obj2 ;
    obj2.getval(100);
    obj2.putval();
    obj1.takedata(300);
    obj1.putva();
    add(obj1,obj2);
    getch();

}
