// To check the no. is odd or even 

#include<iostream>
using namespace std;

int main()
{
    int n;      // declaration of variable
    cout << "Enter the number: " << endl;
    cin >> n;           // reading a no.
    if(n % 2 == 0)      // codition checking 
        cout << "Number is even" << endl;       // result of even no.
    else
        cout << "Number is odd" << endl;
    return 0;
}
