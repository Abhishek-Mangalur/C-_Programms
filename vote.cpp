// Voting eligibility check

#include<iostream>
using namespace std;
int main( )
{
    int age;
    cout<<"Enter the age:"<<endl;
    cin>>age;
    if(age >= 18)
        cout<<"Person is eligible for voting";
    if(age < 18)
        cout<<"Person is not eligible for voting";
}