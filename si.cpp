// Simple Interest

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;        // variable declaration
    float si;
    cout << "Enter the p,t,r:" << endl;
    cin >> a >> b >> c;     // reading three no.s
    si = (a*b*c)/100;       // calculating simple intrest
    cout << "Simple Interest is = " << si;      // showing result
    return 0;
}
