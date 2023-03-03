// To print n even no.

#include <iostream>
using namespace std;
int main()
{
    int i = 2, n;       // declaration of variable
    cout << "Enter the no. upto you want to see: ";
    cin >> n;       // reading a no.
    while (i <= n)      // loop
    {
        cout << i << endl;      // result printing
        i += 2;
    }
    return 0;
}
