#include<iostream>

using namespace std ;

class  Solver

{
   int a, sum, i, j, x, r, count , object;
   public:
   void solve1();
    void solve2();
     void solve3();
      void solve4();
       void solve5();
};
void Solver :: solve1()
 {
    int i,j;
    cout<<"Enter the number";
    cin>> a;

    for(i=1;i<=a;++i){
        for(j=1;j<=i;++j){
        cout<< j << " " ;


        }
        cout<<endl;
    }


 }
 void Solver :: solve2()
 {
  int a, x ,r,sum;
float average;
cin>>a>>x>>r;
sum = a+x+r;
cout<<"The sum of 3 numbers is:"<<sum<<endl;
average =sum/3;
cout<<"The average of 3 numbers is:"<<sum<<endl;




 }
 void Solver :: solve3()
 {
      int rows, number = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << number << " ";
            ++number;
        }

        cout << endl;
    }



 }
 void Solver :: solve4()
 {
  unsigned int n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial;




 }
main()
 {
    Solver object ;
    int count;
    cin>> count;

     switch(count){
     case 1 : object.solve1();
     break;



     case 2 : object.solve2();
     break;

     case 3 : object.solve3();
     break;

     case 4 : object.solve4();
     break;

     }
 }
