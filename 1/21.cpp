#include<iostream>
using namespace std;
class ravvi
{
    int a,b;
 public:

    ravvi(int m, int n)
    {
        a=m;
        b=n;
    }
    ravvi(const ravvi &t)
    {
        a=t.a;
        b=t.b;
    }
    void disp()
    {
    cout<<a<<endl;
    cout<<b;
    }
};
int main()
{
    ravvi t1(10,20);
    ravvi t2(t1);
    t1.disp();
    t2.disp();
}
