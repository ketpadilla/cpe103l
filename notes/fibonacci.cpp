#include <iostream>
using namespace std;

int main() {
  int a0 = 0, a1 = 1, an, n;

  // Get nth term
  cout << "n: ";
  cin >> n;

  // print first two terms
  cout << a0 << endl << a1 << endl;

  // calculate and print subsequent terms
  for (int i = 1; i <= n; i++) {
    an = a0 + a1;
    a0 = a1, a1 = an;
    cout << an << endl;
  }
}