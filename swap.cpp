// Swap of two no. using temp variable

#include <iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"The numbers before swap: \nnum1 = "<<a<<endl;
    cout<<"num2 = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"The numbers after swap: \nnum1 = "<<a<<endl;
    cout<<"num2 = "<<b;
    return 0;
}