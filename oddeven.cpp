// To check the no. is odd or even 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    if(n % 2 == 0)
        cout<<"Number is even"<<endl;
    if(n % 2 != 0)
        cout<<"Number is odd"<<endl;
    return 0;
}