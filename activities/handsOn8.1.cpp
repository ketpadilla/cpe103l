#include <iostream>
#include <cmath>
using namespace std;


// initialize variables;
double num;


int main() {
  // get number
  cout << "Enter number: ";
  cin >> num;

  // use functions and print results
  cout << "abs(x): " << abs(int(num)) << endl;
  cout << "ceil(x): " << ceil(num) << endl;
  cout << "cos(x): " << cos(num) << endl;
  cout << "exp(x): " << exp(num) << endl;
  cout << "fabs(x): " << fabs(num) << endl;

  return 0;
}