#include <iostream>
using namespace std;

void q1();
void q2();
void q3();
void printChar(int n);

int main() {
  q1();
  cout << endl;
  q2();
  cout << endl;
  q3();
}

void q1() {
  int n = 5;

  for (int i = 0; i < 5; i++) {
    printChar(i);
  };
}

void printChar(int n) {
  for (int i = 0; i <= n; i++) {
    cout << "*";
  } cout << endl;
}

void q2() {
  int i = 5;

  while (i >= 1) {
    printChar(i-1);
    i--;
  }
}

void q3() {
  int i = 0;

  do
  {
    printChar(i);
    i++;
  } while (i < 5);
  
}


