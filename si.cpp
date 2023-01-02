// Simple Interest

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    float si;
    cout<<"Enter the p,t,r:"<<endl;
    cin>>a>>b>>c;
    si = (a*b*c)/100;
    cout<<"Simple Interest is = "<<si;
    return 0;
}