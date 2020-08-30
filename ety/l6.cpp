#include<iostream>
using namespace std;
class a
{
protected:
    int rollno,m1,m2;
public:
    void getdata()
    {
        cin>>rollno;
        cin>>m1>>m2;
    }
};
class b
{
protected:
    int sm;
public:
    void takedata()
    {
        cin>>sm;
    }
};
class c : public a, public b
{
    int tot,avg;
public:
    void disp()
    {
        tot=m1+m2+sm;
        avg=tot/3;
        cout<<rollno<<endl;
        cout<<avg;
    }
};
int main()
{
    c k;
    k.getdata();
    k.takedata();
    k.disp();
}
