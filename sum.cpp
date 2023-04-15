// Sum of n natural no.

#include <iostream>
using namespace std;
int main()
{
    int n, i, sum;          // declaration of variables
    cout << ("Enter the value of n: ");
    cin >> n;           // reading a no.
    sum = 0;            // initialization of a variable
    i = 1;
    while(i<=n)         // looping statement
    {
        sum += i;
        i += 1;         // increment of i
    }
    cout << "Sum of first " << n;
    cout << " natural number is " << sum << endl;       // printing result
    return 0;
}
