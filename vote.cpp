// Voting eligibility check

#include<iostream>
using namespace std;
int main()
{
    int age;        // delcaration of variablr
    cout << "Enter the age:" << endl;
    cin >> age;     // reading age
    if(age >= 18)   // condition checking
        cout << "Person is eligible for voting";        // printing result
    if(age < 18)
        cout << "Person is not eligible for voting";
}
