#include<iostream>
using namespace std;
class parvej
{

    int a,b,c;
public:
    void getdata(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void putdata()
    {
        cout<<"A:"<<a<<endl;
         cout<<"B:"<<b<<endl;
         cout<<"C:"<<c<<endl;
    }
    void operator-()
    {
        a=-a;
        b=-b;
        c=-c;

    }

};
    int main()
    {
        parvej ob;
        ob.getdata(10,12,13);
        cout<<"S:";
        ob.putdata();

        -ob;
          cout<<"-S:";
        ob.putdata();
    }
