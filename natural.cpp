// To find first n natural no.

#include <iostream>
using namespace std;
int main()
{
    int n;          // declaration of variable
    cout << "Enter the n natural no.:";        
    cin >> n;       // reading a no.
    for (int i = 1; i <= n; i++)        // loop
    {
        cout << i << endl;      // result printing
    }
    return 0;
}
