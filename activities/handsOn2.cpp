#include <iostream>
using namespace std;

int main() {
  // initilize numbers
  int size = 2;
  double numbers[size];

  // get numbers and determine parity
  string parity[size];
  for (int i = 0; i < size; i++) {
    // input number
    cout << "Enter number: ";
    cin >> numbers[i];

    // determine parity
    if (int(numbers[i]) % 2 == 0) {
      parity[i] = "even";
    } else {
      parity[i] = "odd";
    }
  }

  // do the four basic operations
  double sum = numbers[0] + numbers[1];
  double diff = numbers[0] - numbers[1];
  double prod = numbers[0] * numbers[1];
  double quot = numbers[0] / numbers[1];

  // print numbers
  cout << "The numbers are " << numbers[0] << " and " << numbers[1] << endl;
  
  // print parity (odd or even)
  cout << numbers[0] << " is an " << parity[0] << " number (at nearest integer)" << endl;
  cout << numbers[1] << " is an " << parity[1] << " number (at nearest integer)" << endl;
  
  // print operations
  cout << "The sum of the numbers is " << sum << endl;
  cout << "The difference of the numbers is " << diff << endl;
  cout << "The product of the numbers is " << prod << endl;
  cout << "The quotient of the numbers is " << quot << endl;

  return 0;
}