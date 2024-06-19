#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;
double r, SA, V;

int main() {
  // output √π
  cout << "√π = " << sqrt(PI) << endl;

  // get input
  cout << "Sphere's Radius: ";
  cin >> r;

  // check if radius is negative, if so convert it to its corresponding positive number
  if (r < 0) {
    r = fabs(r);
    cout << "Radius is converted to is corresponding positive number: " << r << endl;
  }

  // calculate sphere's surface area and volume
  SA = 4 * PI * pow(r, 2);
  V = (4 * PI * pow(r, 3)) / 3;

  // output results
  cout << "Sphere's Surface Area: " << SA << endl;
  cout << "Sphere's Volume: " << V << endl;
  
}