#include<iostream>
using namespace std;
class rab
{

    int a,b;
public:
    void setval(int x,int y)
    {
        a=x;
        b=y;

    }
    friend float sum(rab r);
};
  float sum(rab r)
 {
     return float (r.a+ r.b);
 }
 int main()
 {
     rab t;
     t.setval(10,20);
     cout<<"SUM:"<<sum(t);
 }

