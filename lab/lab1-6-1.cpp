/* // * LAB EXERCISE 1.5
  Question 1
  Write a program the uses while loops to perform the following steps:
  - Prompt the user to input two integers: firstNum and secondNum (firstNum must be less than secondNum).
  - Output all odd numbers between firstNum and secondNum.
  - Output the sum of all even numbers between firstNum and secondNum.
  - Output the numbers and their squares between 1 and 10.
  - Output the sum of the square of the odd numbers between firstNum and secondNum.
*/

#include <iostream>
#include <limits>
using namespace std;

// initialize variables
int firstNum, secondNum;

// prototype functions
int getInput(string n);
void printOdd(int firstNum, int secondNum);
void printEvenSum(int firstNum, int secondNum);
void printNumSquares(int firstNum, int secondNum);
void printSumSquareOdd(int firstNum, int secondNum);


// main program
int main() {
  // get first and second integers
  firstNum = getInput("first");
  secondNum = getInput("second");

  // validate firstNum < secondNum, else reprompt
  while (secondNum <= firstNum) {
    cout << "Please enter a higher integer" << endl;
    secondNum = getInput("second");
  }

  // output oddNumbers
  printOdd(firstNum, secondNum);

  // output sum of evenNumbers
  printEvenSum(firstNum, secondNum);

  // output numbers and their squares
  printNumSquares(1, 10);

  // output sum of squared odd numbers
  printSumSquareOdd(firstNum, secondNum);

  // output numbers and their squares between 1 and 10
  cout << endl << "ADDITIONAL:" << endl;
  printNumSquares(firstNum, secondNum);

  return 0;
}


// get integer 
int getInput(string n) {
  int input; // initialize input variable

  for (;;) { // infinite loop
    cout << "Please enter the " << n << " integer: ";
    if (cin >> input) {
        return input; // return valid input
    } else { // reprompt until valid input
        cout << "Please enter a valid integer" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  }
}


// print odd numbers 
void printOdd(int firstNum, int secondNum) {
  cout << "The odd numbers between " << firstNum << " and " << secondNum << " are: ";
  while (firstNum < secondNum - 1) {
    firstNum++;
    if (firstNum % 2 != 0) {
      cout << firstNum << " ";
    }
  } cout << endl;
}


// print sum of even numbers
void printEvenSum(int firstNum, int secondNum) {
  int evenSum = 0;
  cout << "The sum of even numbers between " << firstNum << " and " << secondNum << " is: ";
  while (firstNum < secondNum - 1) {
    firstNum++;
    if (firstNum % 2 == 0) {
      evenSum += firstNum;
    }
  } cout << evenSum << endl;
}


// print the numbers and their squares
void printNumSquares(int firstNum, int secondNum) {
  cout << "The numbers and the their squares between " << firstNum << " and " << secondNum << " are:" << endl;
  int firstNumCopy = firstNum;
  while (firstNum < secondNum - 1) {
    firstNum++;
    cout << firstNum << " ";
  } cout << endl;

  while (firstNumCopy < secondNum - 1) {
    firstNumCopy++;
    cout << firstNumCopy*firstNumCopy << " ";
  } cout << endl;
}


// print the sum of the square of the odd numbers 
void printSumSquareOdd(int firstNum, int secondNum) {
  int oddSquareSum = 0;
  cout << "The sum of the squares of the odd numbers between " << firstNum << " and " << secondNum << " is: ";
  while (firstNum < secondNum - 1) {
    firstNum++;
    if (firstNum % 2 != 0) {
      oddSquareSum += (firstNum*firstNum);
    }
  } cout << oddSquareSum << endl;
}