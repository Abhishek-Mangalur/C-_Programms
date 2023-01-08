// Factorial of a no.

#include <iostream>
using namespace std;
int main()
{
    int n,i,fact;
    cout<<"Enter the value of n: ";
    cin>>n;
    fact = 1;
    i = 1;
    while(i<=n)
    {
        fact = fact * i;
        i = i + 1;
    }
    cout<<"Factorial of "<<n;
    cout<<" is "<<fact;
    return 0;
}