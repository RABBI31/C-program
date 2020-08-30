#include<iostream>
using namespace std;

class test
{
    int a,b;
public:
    test()
    {
        a=0;
        b=0;
    }
    test (int x ,int y)
    {
        a=x;
        b=y;
    }
    test operator +(test t);
    void disp();
};
test test :: operator +(test t)
{
    test temp;
    temp.a=a+t.a;
    temp.b=b+t.b;
}
void test :: disp()
{
    cout <<a<<b<<endl;

}
int main()
{
    test t1,t2,t3;
    t1=test(10,20);
    t2=test(30,40);
    t3=t1+t2;
    t1.disp();
    t2.disp();
    t3.disp();
}
