#include <iostream>
using namespace std;


// * CALCULATING THE CIRCUFERENCE AND AREA OF A CIRCLE
int main() {
  // initialize pi, radius, circumference, and area
  const double pi = 3.1416;
  double rad, cir, A;

  // input radius
  cout << "Radius: ";
  cin >> rad; 

  // calculate circumference and area
  cir = 2 * pi * rad;
  A = pi * (rad*rad);

  // output radius, circumference, and area
  cout << "Radius: " << rad << endl;
  cout << "Circumferfence: " << cir << endl;
  cout << "Area: " << A << endl; 
}

