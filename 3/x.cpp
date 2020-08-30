#include<iostream>

using namespace std;
int add(int a);
main()
{
    int a;
    cout<<"Enter value :\n";
    cin>>a;
    cout<<"sum of"<<add(a);

}
int add(int a)
{
    if(a!=0)
    {
        return  a+add(a-1);
    }
return 0;
}


