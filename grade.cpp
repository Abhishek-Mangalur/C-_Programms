// Grading System

#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<("Enter the marks:")<<endl;
    scanf("%d",&marks);
    if(marks <= 39)
        cout<<("Grade F (Fail)")<<endl;
    else if(marks <= 49)
        cout<<("Grade E")<<endl;
    else if(marks <= 59)
        cout<<("Grade D")<<endl;
    else if(marks <= 69)
        cout<<("Grade C")<<endl;
    else if(marks <= 79)
        cout<<("Grade B")<<endl;
    else if(marks <= 89)
        cout<<("Grade A")<<endl;
    else if(marks <= 100)
        cout<<("Grade O (Outstanding)")<<endl;
    else
        cout<<("You have entered more than 100 marks")<<endl;
    return 0;
}
