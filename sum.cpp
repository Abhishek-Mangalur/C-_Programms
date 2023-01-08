// Sum of n natural no.

#include <iostream>
using namespace std;
int main()
{
    int n,i,sum;
    cout<<("Enter the value of n: ");
    cin>>n;
    sum=0;
    i=1;
    while(i<=n)
    {
        sum += i;
        i += 1;
    }
    cout<<"Sum of first "<< n;
    cout<<" natural number is "<<sum<<endl;
    return 0;
}