#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={12,34,54,23,56};
    int *p,i,sum=0;

    p=a;

   for( i=0; i<5;i++)
   {
       cout<<*p<<endl;

        sum=sum+*p;

       p++;



   }
   cout<<sum;


}
