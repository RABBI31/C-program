#include<iostream>
#include<cmath>
#include<stdlib.h>

#define PIE 3.141592654
#define MAX 15

using std::cout;
using std::cin;

int fact(int i)
{
    int f;
if(i<= 1)
    {
        return 1;
    }
    f=i*fact(i-1);
    return f;
}

double sum()
{
    double sumx = 0;
for(int i=1;i<=MAX;i++)
    {
sumx = sumx + pow((float)1/i,i);
cout<<"\n"<<sumx;
    }
    return sumx;
}

double cosx(float value)
{
    double cosine = 0;
    int temp;
for(int i=0;i<MAX;i++)
    {
        temp = 2*i;
        cosine = cosine + (pow(-1,i)*pow(value,temp))/fact(temp);
    }
    return cosine;
}

double sinx(float value)
{
    double sine = 0;
    int temp;
for(int i=0;i<MAX;i++)
    {
        temp = 2*i + 1;
        sine = sine + (pow(-1,i)*pow(value,temp))/fact(temp);
    }
    return sine;
}

int main()
{
    int choice;
    float no;
    do
    {
cout<<"\nChoose any option ";
cout<<"\n1.Sin(x)\n2.Cos(x)\n3.sum\n";
cin>>choice;
        switch(choice)
        {
            case 1:
cout<<"\nEnter the value of x in radian : ";
cin>>no;
                //to use inbuilt sin() function uncomment next line
                //cout<<"\n"<<sin(no);
cout<<"\nValue of sin( "<<no<<" ) = "<<sinx(no);
                break;
            case 2:
cout<<"\nEnter the value of x in radian : ";
cin>>no;
                //to use inbuilt cos() function uncomment next line
                //cout<<"\nAns should be "<<cos(no);
cout<<"\nValue of cos( "<<no<<" ) = "<<cosx(no);
                break;
            case 3:
cout<<"\nValue of sum = "<<(double)sum();
                break;
            default:
exit(0);
        }
}while(true);
        return 0;
}
