#include<iostream>

using namespace std;
double fact(int a)
{
    if(a>1)
    {
       return(a*fact(a-1));
    }
    else
    {
       return 1;
    }

}
int main()
{
    int num;
    cin>>num;
    cout<<"factorial of"<<num<<"is"<<fact(num);

}

