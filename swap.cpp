// Swap of two no. using temp variable

#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;         // declaration of variables
    cout << "Enter two numbers:" << endl;
    cin >> a >> b;          // reading two no.s
    cout << "The numbers before swap: \nnum1 = " << a << endl;      
    cout << "num2 = " << b << endl;
    temp = a;       // intialize a to temp variable
    a = b;
    b = temp;
    cout << "The numbers after swap: \nnum1 = " << a << endl;
    cout << "num2 = " << b;     // printing result
    return 0;
}
