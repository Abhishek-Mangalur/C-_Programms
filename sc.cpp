//Simple Calculator

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    char op;        // declaring a character variable
    int a,b;        // declaring a integer variable
    float res;      // declaring a float variable
    cout << "Enter the operator(+,-,*,/):" << endl;
    cin >> op;      // reading an operator
    cout << "Enter the two operands:" << endl;
    cin >> a >> b;  // reading two no.
    switch(op)      // switch statements
    {
        case '+' : res = a + b;
            break;
        case '-' : res = a - b;
            break;
        case '*' : res = a * b;
            break;
        case '/' :if(b != 0)
                  {
                        res = a / b;
                  }
                  else
                  {
                        cout << "Division not possible!" << endl;
                        exit (0);
                  }
                    
        default: cout << "You have entered wrong cases" << endl;
        exit(0);
    }
    cout << "The Result is = " << res;      // printing result 
    return 0;
}
