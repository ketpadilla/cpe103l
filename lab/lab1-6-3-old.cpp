/* // * LAB EXERCISE 1.5
  Question 3
  Redo Hands-on Exercise #2 using do-while loops
*/
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
  int i = 0;
  do {
    // input number
    cout << "Enter number: ";
    cin >> numbers[i];

    // determine parity
    if (int(numbers[i]) % 2 == 0) {
      parity[i] = "even";
    } else {
      parity[i] = "odd";
    }

    i++;
  } while (i < size);

  // print parity (odd or even)
  i = 0;
  do {
    cout << numbers[i] << " is an " << parity[i] << " number (at nearest integer)" << endl;
    i++;
  } while (i < size);

  // do and print the four basic operations
  i = 0;
  do {
    result[i] = operation[i](numbers[0], numbers[1]);
    cout << "The " << operationName[i] << " of the numbers is " << result[i] << endl;
    i++;
  } while (i < 4);

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