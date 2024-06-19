#include <iostream>
using namespace std;

const double PI = 3.14;
double radius;
double area;
double circumference;

int main()
{

cout << "Enter the radius: ";
cin >> radius;
cout << endl;

area = PI * radius * radius;
circumference = 2 * PI * radius;

cout << "Area = " << area << endl;
cout << "Circumference = " << circumference << endl;

return 0;

}