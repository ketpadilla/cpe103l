//include statement(s)
#include <iostream>
#include <string>
//using namespace statement
using namespace std;

int main()
{
    //variable declaration
    string name;
    double studyHours;

    //executable statements
    cout << "What is your name? ";
    cin >> name;

    cout << "How many hours do you study? ";
    cin >> studyHours;

    cout << "Hello " << name << " On Saturday, you need to study " << studyHours << " hours for the exam.";

    //return statement
    return 0;
}