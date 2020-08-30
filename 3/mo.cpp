#include<iostream>
#include<conio.h>
using namespace std;

class A;
class B
{
private:
    int b;
public:
    int get(int x)
    {
        b=x;
    }
    int put()
    {
        cout<<"value of B"<<"  "<< b<<endl;
    }

    friend void add(A,B);
};
class A
{
private:
    int a;
public:
    int get(int x)
    {
        a=x;
    }
    int put()
    {
        cout<<"value of A"<<"   "<< a<<endl;
    }

    friend void add(A,B);
};
 void add(A ob1,B ob2)
 {
     cout<<"sum of A and B"<< "   " <<ob1.a + ob2.b;
 }
 int main()
 {
     A a;
     B b;
     a.get(10);
     b.get(15);
     a.put();
     b.put();
     add(a,b);
     getch();
 }
