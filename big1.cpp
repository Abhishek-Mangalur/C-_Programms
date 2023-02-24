// Biggest of three numbers

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, large;         // declaration of variable
    cout << "Enter three numbers:" << endl;
    cin >> a >> b >> c;         // reading 3 no.
    large = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);    // condition checking
    cout << "The largest number is: " << large;         // pinting the biggest no.
    return 0;
}
