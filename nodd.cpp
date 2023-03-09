// To print n odd no.

#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;       // declaration of variable
    cout << "Enter the no. upto you want to see: ";
    cin >> n;           // reading a no.
    while (i <= n)      // looping statement
    {
        cout << i << endl;      // printing statement
        i += 2;
    }
    return 0;
}
