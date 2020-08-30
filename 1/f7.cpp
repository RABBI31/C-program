#include<iostream>
#include<cstring>
using namespace std;

    string space2underscore(string text)
{
    for(int i = 0; i < text.length(); i++)
    {
        if(text[i] == ' ')
            text[i] = '_';
    }
    return text;
}
int main()

{
    string x("My Name RAbbi");
    x =space2underscore(x);
    cout<<x;
}

