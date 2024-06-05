/* // * LAB EXERCISE 1.5
  Based on the vehicle’s model year and weight, the Land Transportation Office determines the car’s weight class and registration fee using the following table:
  Model Year        Weight (lbs.)  Weight Class  Registration Fee (PhP)
  1970 or earlier   < 2700          1            1500
                    2700 - 3800     2            2000
                    > 3800          3            2500
  1971 - 1979       < 2700          4            1750
                    2700 - 3800     5            2250
                    > 3800          6            2800
  1980 or later     < 3500          7            3000
                    ≥ 3500          8            3500

  Using this information, wrtie a C++ program that accepts the year and wiehgt of a vehicle and determine and display the weight class and registration fee for the car.
*/

#include <iostream>
using namespace std;

// initialize program variables
const int registrationFee[8] = {1500, 2000, 2500, 1750, 2250, 2800, 3000, 3500}; // model registration fee (RF)
const int weightClass[8] = {1, 2, 3, 4, 5, 6, 7, 8}; // model weight class (WC)

// initialize user variables
int carMY, carWC, carRF, idx; // car's model year (MY), WC, and RF, with index to return WC and RF from corresponding MY
double carWT; // car's weight (WT)


// * main program
int main() {
  // get car's model year and weight 
  cout << "What is your car's model year (e.g., 1974) and weight in lbs (e.g., 2735)?" << endl;
  cout << "Model Year: "; cin >> carMY;
  cout << "Weight (lbs): "; cin >> carWT;

  // compare inputs
  if (carMY <= 1970) { // 1970 or earlier
    if (carWT < 2700) { 
      idx = 0;
    } else if (carWT >= 2700 and carWT <= 3800) {
      idx = 1;
    } else if (carWT > 3800) {
      idx = 2;
    }
  } else if (carMY > 1970 and carMY < 1980) { // 1971 to 1979
    if (carWT < 2700) {
      idx = 3;
    } else if (carWT >= 2700 and carWT <= 3800) {
      idx = 4;
    } else if (carWT > 3800) {
      idx = 5;
    }
  } else if (carMY >= 1980) { // 1980 or later
    if (carWT < 3500) {
      idx = 6;
    } else if (carWT >= 3500) {
      idx = 7;
    }
  }
  
  // get and print car's weight class and registration fee
  carWC = weightClass[idx];
  carRF = registrationFee[idx];
  cout << "Car's Weight Class: " << carWC << endl;
  cout << "Car's Registration Fee: " << carRF << endl;

  return 0;
}