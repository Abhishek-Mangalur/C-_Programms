// Area of circle

#include <iostream>
using namespace std;
#define PI 3.14         // defining a pi value
int main()
{
    float r;        // declaration of variable
    cout << "Enter the radius:" << endl;
    cin >> r;       // reading a radius value
    cout << "Area of circle = " << PI*r*r;      // printing result
    return 0;
}
