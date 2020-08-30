#include<iostream>

using namespace std;

class rabeya
{
    int side;
public:
    int area(int a )
    {
        int gol,pi;
        pi=3.1416;
        side =a;
        gol=pi*side*side;
        cout<<gol<<endl;


    }
    int area(int b , int c)
    {
        int rec,len,width;
        len=b;
        width=c;
        rec=len*width;
        cout<<rec<<endl;
    }
    float area(float d)
    {
        int sq;
        return(d*d);
    }

};
int main()
{
  rabeya obj;
  obj.area(3) ;
  obj.area(3,2) ;
  obj.area(4);
}
