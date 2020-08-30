#include<stdio.h>
#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

class table
{
    int n;
    float *d;
    int *f;
    float m,v,s;
public:
    void getdata(void);
    void putdata(void);
    void variance(void);
    void mean(void);
    void sta_deviation(void);
};

void table::mean()
{
    m = 0;
for(int i=0;i<n;i++)
    {
        m = m + d[i];
    }
    m = m/n;
}

void table::variance()
{
    v = 0;
for(int i=0;i<n;i++)
    {
        d[i] = d[i]-m;
        v = v+(d[i]*d[i]);
    }
    v = v/n;
}

void table::sta_deviation()
{
    s = sqrt(v);
}

void table::getdata()
{
cout<<"\nEnter the total no of data ";
cin>>n;
    d = new float[n+1];
    f = new int[n+1];
cout<<"\nEnter data into integer or float and frequency in integer ";
for(int i=0;i<n;i++)
    {
cout<<"\nEnter the data : ";
cin>>d[i];
cout<<"Enter the frequency related to this data : ";
cin>>f[i];
    }
return ;
}

void table::putdata()
{
cout<<"\nData       ";
for(int i=0;i<n;i++)
    {
cout<<d[i]<<"  ";
    }
cout<<"\nFrequency ";
for(int i=0;i<n;i++)
    {
cout<<f[i]<<"  ";
    }
mean();
variance();
sta_deviation();
cout<<"\nParameters for this information : ";
cout<<"\nMean = "<<m;
cout<<"\nVariance = "<<v;
cout<<"\nStandard Deviation = "<<s;
return ;
}

int main()
{
    table t1;
    t1.getdata();
    t1.putdata();

    return 0;
}

