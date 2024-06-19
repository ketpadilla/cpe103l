#include <iostream>
using namespace std;


// initialize variables;
double numbers[2];
char input;


// prototype functions
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);


// main program
int main() {
  // get numbers
  for (int i = 0; i < 2; i++) {
    // input number
    cout << "Enter number (" << i + 1 << "): ";
    cin >> numbers[i];
  }

  // get user input
  cout << "What do you want to do?" << endl; 
  cout << "A. Add" << endl;
  cout << "B. Subtract" << endl;
  cout << "C. Multiply" << endl;
  cout << "D. Divide" << endl;
  cout << "Option (Enter Letter Only): ";
  cin >> input;

  // swtich case
  switch (tolower(input)) {
    case 'a':
     cout << numbers[0] << " + " << numbers[1] << " is " << add(numbers[0], numbers[1]) << endl;
     break;
    case 'b':
     cout << numbers[0] << " - " << numbers[1] << " is " << subtract(numbers[0], numbers[1]) << endl;
     break;
    case 'c':
     cout << numbers[0] << " * " << numbers[1] << " is " << multiply(numbers[0], numbers[1]) << endl;
     break;
    case 'd':
     cout << numbers[0] << " / " << numbers[1] << " is " << divide(numbers[0], numbers[1]) << endl;
     break;
  }

  return 0;
}


// add numbers
double add(double num1, double num2) {
    return num1 + num2;
}


// subtract numbers
double subtract(double num1, double num2) {
    return num1 - num2;
}


// multiply numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}


// divide numbers
double divide(double num1, double num2) {
    return num1 / num2;
}