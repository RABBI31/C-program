#include<iostream>
using namespace std;
 int rabbi(int);
  double rabbi(float);
    float rabbi (int,float);

int main ()
{
    int a,b;
     rabbi(a);
     rabbi(b);
     rabbi (a,b);
}
int rabbi(int a)
{
    cin>>a;
    cout<<a<<endl;
}
double rabbi(float b)
{
    cin>>b;
    cout<<b<<endl;
}
float rabbi(int a, float b)
{
   float sum;
   sum=a+b;
   cout<<sum;
}
