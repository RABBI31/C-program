#include<iostream>
using namespace std;
class model
{
    int i,u,t;
public:
    void getdata(int x,int y,int z);
    void operator-();
    int prove();
};
void model :: getdata(int x,int y,int z)
{
    i=x;
    u=y;
    t=z;
}
void model :: operator-()
{
    i=-i;
    u=-u;
    t=-t;
}
int model::prove()
{
    cout<<i<<endl;
    cout<<u<<endl;
    cout<<t;
}
int main()
{
    model p;
    p.getdata(-50,88,-19);
    p.prove();
    -p;
    p.prove();
}
