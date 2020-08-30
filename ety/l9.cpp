#include<iostream>
using namespace std;

class complex
{
    int real , imag;
public:
    void setd()
    {
        cin>>real>>imag;
    }
    void disp()
    {
        cout<<"sum of"<<real<<"+i"<<imag;
    }
    friend complex sum(complex ,complex );
};
complex sum(complex a,complex b)
{
    complex t;
    t.real=a.real+b.real;
    t.imag=a.imag+b.imag;
    return t;
}
int main()
{
    complex x,y,z;
    x.setd();
    y.setd();
    z=sum(x,y);
    z.disp();
}
