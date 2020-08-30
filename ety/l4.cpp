#include<iostream>
using namespace std;

class hjk
{
    int v,s;
public:
    int insert()
    {
        cin>>v>>s;
    }
    int div()
    {
        int j;
        j=v/s;
        cout<<j;
    }
    int show()
    {
        div();
    }
};
int main()
{
    hjk obj;
    obj.insert();
    obj.show();
}
