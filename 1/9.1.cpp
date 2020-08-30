#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *pt,**pt1,***pt2;
    int a=13;

    pt=&a;
    pt1=&pt;
    pt2=&pt1;
    cout<<"Address of A:"<<pt<<endl;
    cout<<"Address of pt:"<<pt1<<endl;
    cout<<"Address of pt1:"<<pt2<<endl;

    cout<<"value of A:"<<*pt<<endl;
    cout<<"value of pt:"<<**pt1+12<<endl;
    cout<<"value of pt1:"<<***pt2+13<<endl;


}
