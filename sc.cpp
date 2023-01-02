//Simple Calculator

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    char op;
    int a,b;
    float res;
    cout<<"Enter the operator(+,-,*,/):"<<endl;
    cin>>op;
    cout<<"Enter the two operands:"<<endl;
    cin>>a>>b;
    switch(op)
    {
        case '+' : res = a + b;
            break;
        case '-' : res = a - b;
            break;
        case '*' : res = a * b;
            break;
        case '/' :if(b!=0)
                    {
                        res = a / b;
                    }
                    else
                    {
                        cout<<"Division not possible!"<<endl;
                        exit (0);
                    }
                    break;
        default: cout<<"You have entered wrong cases"<<endl;
        exit(0);
    }
    cout<<"The Result is = "<<res;
    return 0;
}
