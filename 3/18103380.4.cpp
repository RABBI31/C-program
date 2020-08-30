#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float V,P,r;
    int n;
cout<<"\nEnter principal amount   : ";
cin>>P;
cout<<"\nEnter Interest rate : ";
cin>>r;
cout<<"\nEnter time period in year : ";
cin>>n;
cout<<"\nYear\tPrincipal_AmountInterest_RateAmount_At_The_End_of_year";
for(int i=1;i<=n;i++)
    {
        V = P * pow((1+r),i);
cout<<"\n"<<i<<"\t"<<P<<"\t\t\t" <<r<<"\t\t\t" <<V;
        P=V;
    }
  return 0;
}

