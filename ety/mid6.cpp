#include<iostream>
using namespace std;
class test
{
    int a,b,sum;
public:
    test (int x,float y)
    {
        a=x;
        b=y;
    }
    test (const test& t)
    {
                a=t.a;
        b=t.b;

    }
     void dis()
    {
        int sum =a+b;
        cout<<"SUM:"<<sum<<endl;
    }
};
int main()
{
    test t1(4,5.7);
    test t2(t1);
    cout<<"t1.object:"<<endl ;
    t1.dis();
    cout<<"t2.object";
    t2.dis();
    return 0;
}
