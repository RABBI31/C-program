#include<iostream>

using namespace std;
class test
{
    int value;
public:
    test()
    {

    }
    test (int a)
    {
        value=a;
    }
    test operator-(test s)
    { test t;
        t.value=s.value-value;
        return t;
    }
    int display()
    {
        cout<<value;
    }

};
int main()
{
    test t1(80),t2(30),t3;
    t3=t1-t2;
    t1.display();
      t2.display();
        t3.display();
}
