#include<iostream>
using namespace std;

class rabbi
{
    int a,b,sum;
public:
    void getdata();
    int cal();

};
void rabbi :: getdata()
{
   cin>>a>>b;
}
inline int rabbi :: cal()
{

    return(a+b);
}
//int rabbi :: display()
//{
    //return cal();

int main()
{
    rabbi r;
    r.getdata();
    cout<<r.cal();

}
