#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    test (int x,float y)
    {
        a=x;
        b=y;
    }
    test(const test & t)
    {
        a=t.a;
        b=t.b;
    }
    void dis()
    {
        cout<<"A:"<<a<<endl;
        cout<<"B:"<<b<<endl;
    }
};
int main()
{
    test t1(4,5.7);
    test t2(t1);
    cout<<"t1.object:";
    t1.dis();
    cout<<"t2.object";
    t2.dis();
    return 0;
}
