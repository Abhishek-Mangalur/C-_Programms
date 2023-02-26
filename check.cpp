// To check no. is positive or not 

#include<iostream>
using namespace std;
int main()
    {
        int n;          // declaration of variable
        cout << "Enter the number:" << endl;
        cin >> n;       // reading a no.
        if(n > 0)       // +ve no. checking no. statement
            cout << "Number is positive" << endl;       // result
        if(n < 0)       // -ve no. checking no. statement
            cout << "Number is negative" <<endl;        // result
        return 0;
}
