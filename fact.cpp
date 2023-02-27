// Factorial of a no.

#include <iostream>
using namespace std;
int main()
{
    int n, i, fact;         // declaration of variable
    cout << "Enter the value of n: ";
    cin >> n;           // reading a no.
    fact = 1;           // initialization of 1
    i = 1;
    while(i <= n)       // loop for condition checking
    {
        fact = fact * i;
        i = i + 1;
    }
    cout << "Factorial of " << n;
    cout << " is " << fact;         // printing result 
    return 0;
}
