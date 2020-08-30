#include<iostream>
using namespace std;
class ravvi
{
    int a,b;
 public:
    ravvi()
    {
        a=0;
        b=0;
    }
    ravvi(int m, int n)
    {
        a=m;
        b=n;
    }
    int display()
    {
        cout<<a+b;
    }
    ~ravvi()
    {
        cout<<"destroy ravvi";

    }



};
int main()
{
    ravvi a();
    ravvi b(10,20);
    b.display();
}
