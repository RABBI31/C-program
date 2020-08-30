#include<iostream>
using namespace std;
class rab
{
    int a,b,c;
public:
    rab()
    {

    }
     rab(int x)
    {
        a=x;
    }
     rab(double y,double z)
    {
        b=y;
        c=z;
    }
    int display()
    {
        cout<<"A:"<<a<<endl;
         cout<<"B:"<<b<<endl;
          cout<<"C:"<<c;

    }
};
int main()
{
    rab t(4);
    rab t1(3.2,5.4);
    t.display();
    t1.display();
}
