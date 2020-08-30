#include<iostream>
using namespace std;

void rabbi(int x)
{
    try
    {
        if(x>0)
        {
            throw x;
        }
        else
        {
            throw x;
        }
    }
    catch(int no)
    {
        cout<<"catch int:"<<no;
    }
    catch (char ch)
    {
        cout<<"catch ch:"<<ch;
    }
    cout<<"next statemen";
}
int main()
{
    cout <<"X is greater than 0";
    rabbi(3);
    cout <<"X is less than than 0";
    rabbi(-2);
}
