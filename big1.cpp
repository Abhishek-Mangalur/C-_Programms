// Biggest of three numbers

#include<iostream>
using namespace std;
int main( )
{
    int a, b, c, large;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    large = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
    cout<<"The largest number is: "<<large;
    return 0;
}