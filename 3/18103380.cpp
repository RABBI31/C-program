#include<iostream>
using namespace std;
int main()
{
    int no_of_line;
cout<<"\nEnter the no of line you want to print : ";
cin>>no_of_line;

for(int i=1;i<=no_of_line;i++)
    {
for(int j=1;j<=i;j++)
        {
cout<<i;
        }
cout<<"\n";
    }
    return 0;
}
