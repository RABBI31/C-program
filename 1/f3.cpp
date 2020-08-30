#include<iostream>
using namespace std;

class hjk
{
    int v,s;
public:
    void inset()
    {

        cin>>v>>s;
    }
    void div()
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
obj.inset();

    obj.show();
}
