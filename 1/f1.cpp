#include<iostream>
using namespace std;
class base
{

public:
    int a,b;

    void getdata()
    {
        a=8;
        b=2;
    }
    void disp(void)
    {
        cout<<a+b<<endl;

    }
    void show()
    {
   cout<<a*b<<endl;
    }
};
class derive: public base
{
public:
    int x,y;
    void getdata()
    {
        x=a;
        y=b;
    }
    void disp(void)
    {
       cout<<a-b<<endl;

    }
    void show()
    {
        cout<<a/b<<endl;
    }
};
int main()
{
    base *p;
    base objb;
    derive objd;
    p=&objb;
    p->disp();
     p->show();
     p=&objd;
      p->disp();
       p->show();

}

