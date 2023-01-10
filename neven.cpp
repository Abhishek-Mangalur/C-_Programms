// To print n even no.

#include <iostream>
using namespace std;
int main()
{
    int i = 2,n;
    cout<<"Enter the no. upto you want to see: ";
    cin>>n;
    while (i<=n)
    {
        cout<<i<<endl;
        i += 2;
    }
    return 0;
}