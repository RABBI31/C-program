#include<iostream>
using namespace std;

class rab
{
    int a,b,c;
public:
    void setvalue(int x, int y, int z )
    {
        a=x;;
        b=y;
        c=z;

    }
    friend float avg(rab n);
};
float avg(rab n)
{
    return float (n.a+n.b+n.c)/3;
}
int main()
{
    rab t;
    t.setvalue(23,45,32);
    cout<<"AVG: "<<avg(t);
}

