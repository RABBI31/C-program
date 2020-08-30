#include<iostream>
using namespace std;

int main()
{
    int a;
    float b;
    int& c=a;
    float& d=b;
    a=3;
    cout<<a;
    cout<<c;
    b=11.2;
    cout<<b;
    cout<<d;
}
