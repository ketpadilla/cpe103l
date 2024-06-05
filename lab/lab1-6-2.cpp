/* // * LAB EXERCISE 1.5
  Question 2
  Redo Hands-on Exercise #2 using for loops
*/

// * NOTE. My original Hands-on Exercise 2 already utilized a for-loop. This version adds two more for-loops to print the parity of the numbers and the four basic operations of the numbers.

#include <iostream>
using namespace std;


// initialize variables;
double numbers[2];


// prototype functions
double sum(double num1, double num2);
double difference(double num1, double num2);
double product(double num1, double num2);
double quotient(double num1, double num2);
double (*operation[]) (double, double) = {sum, difference, product, quotient};


// main program
int main() {
  // initialize variables
  int size = sizeof(numbers) / sizeof(double);
  string parity[size];
  double result[4];
  string operationName[4] = {"sum", "difference", "product", "quotient"};

  // get numbers and determine parity
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

  // print parity (odd or even)
  for (int i = 0; i < size; i++) {
    cout << numbers[i] << " is an " << parity[i] << " number (at nearest integer)" << endl;
  }

  // do and print the four basic operations
  for (int i = 0; i < 4; i++) {
    result[i] = operation[i](numbers[0], numbers[1]);
    cout << "The " << operationName[i] << " of the numbers is " << result[i] << endl;
  }

  return 0;
}


// sum numbers
double sum(double num1, double num2) {
    return num1 + num2;
}


// difference numbers
double difference(double num1, double num2) {
    return num1 - num2;
}


// product numbers
double product(double num1, double num2) {
    return num1 * num2;
}


// quotient numbers
double quotient(double num1, double num2) {
    return num1 / num2;
}