// Bigger of two numbers

#include<iostream>
using namespace std;
int main( )
{
    int a, b, big;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    big = (a>b) ? a : b;
    cout<<"The bigger no is: "<<big;
    return 0;
}