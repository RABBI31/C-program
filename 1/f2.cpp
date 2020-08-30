#include<iostream>
using namespace std;

class result
{
    float p,q;
public:
    float multip(int i, float j)
    {
        p=i*j;
        cout<<"P:"<<p<<endl;
    }
    float multip(float h ,float x, float s)
    {
        q=h*x*s;
        cout<<"Q:"<<q;
    }
};
int main()
{
    result obj;
    obj.multip(2,3.1);
    obj.multip(3.1  , 4.2 , 1.3 );

}
