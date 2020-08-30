#include<iostream>
using namespace std;

int main()
{
    int *arr;
    int size;

     cout<<"enter the the size of array";
     cin>>size;
     cout<<size;
     arr= new int[size];
     cout<<"dynamic allocation";

     delete arr;

}
