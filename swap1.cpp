// Swap of two no. without using temp variable

#include <iostream>
using namespace std;
int main()
{
    int a, b;           // declaration of variables
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;      // reading two no.
    cout << "The numbers before swap: \nnum1 = " << a << endl;
    cout << "num2 = " << b << endl;
    a = a + b;          // swaping technique
    b = a - b;
    a = a - b;
    cout << "The numbers after swap: \nnum1 = " << a << endl;
    cout << "num2 = " << b << endl;         // printing the result
    return 0;
}
