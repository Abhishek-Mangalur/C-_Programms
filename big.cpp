// Biggest of two numbers

#include<iostream>
using namespace std;
int main()
{
    int a, b, big;  // variable delcaration 
    cout << "Enter the value of a:"<<endl;
    cin >> a;     // intake of first number
    cout << "Enter the value of b:"<<endl;
    cin >> b;     // intake of second number
    big = (a > b) ? a : b;    // checking which number is big
    cout << "The bigger no is: " << big;    // printing the result
    return 0;
}
