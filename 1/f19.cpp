#include<iostream>
using namespace std;

class employee
{
    char name[30];
    int age;
public:
    void getdata();
    void putdat();
};
void employee :: getdata()
{
    cin>>name;
    cin>>age;
}
void employee :: putdat()
{
    cout<<name;
    cout<<age;
}
const int size =5;
int main()
{
    employee manager[size];
    for(int i=0;i<size;i++)
    {
        cout<<i+1;
        manager[i].getdata();
    }
    cout<<"\n";
    for(int i=0;i<size;i++)
    {
        cout<<i+1;
    manager[i].putdat();
    }
}



