#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write your main here
    double num;
    cout << "Enter number with decimal: ";
    cin >> num;
    cout << num << " to the nearest integer is " << int(round(num)) << endl;
    return 0;
}