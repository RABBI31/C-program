#include<iostream>
using namespace std;
 class cse
 {
     int a,b;
 public:
    cse()
    {
        a=3;
        b=5;
    }
    ~cse()
    {
        cout<<"deleted cse";
    }
    int add_show()
    {
        int sum;
        sum=a+b;
        cout<<sum<<endl;
    }
 };
 int main()
 {
     cse obj;
     obj.add_show();
 }
