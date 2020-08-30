#include<iostream>
#include<conio.h>
using namespace std;

class bvc
{
    int w;
public:
    void getval(int h);

    void display();

};
void bvc :: getval(int h)
 {
        w=h;
    }
    void bvc::display()
     {
        cout<<w;
    }

const int size=8;
int main()
{
    bvc number[size];
   for(int i=0;i<size;i++)
   {
       cout<<i+1;
       number[i]. getval(0);
   }
    cout<<"\n";
    for(int i=0;i<size;i++)
   {
       cout<<i+1;
       number[i].display();
   }

}
