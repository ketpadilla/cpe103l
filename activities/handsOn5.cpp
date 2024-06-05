#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // initialize variables
    double netBalance, payment, averageDailyBalance, interest, interestRate;
    int d1, d2;

    // get netBalance, d1, and d2
    cout << "What is the balance shown in your bill? ";
    cin >> netBalance;

    cout << "How many days are there in the billing cycle? ";
    cin >> d1;

    cout << "How much did you pay? ";
    cin >> payment;
    
    cout << "How many days are left in the billing cycle when payment is made? ";
    cin >> d2;

    cout << "What is the interest rate? ";
    cin >> interestRate;

    // calculate average daily balanace and interest
    averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
    interest = round(averageDailyBalance * interestRate * 100.0);
    interest = interest / 100.0;

    // print interest
    cout << "Interest is: " << interest << endl;
    return 0;
}