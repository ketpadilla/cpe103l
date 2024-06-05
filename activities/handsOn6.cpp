#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // initialize input variables
    double merch, salary, rent, elec;
    // initialize other variables
    const double netProfit = 0.10;
    const double sale = 0.15;
    
    // get merchandise cost
    cout << "How much did the merchandise cost? ";
    cin >> merch;

    // get salaries to be paid
    cout << "How much are the salaries to be paid? ";
    cin >> salary;

    // get rent
    cout << "How much is yearly rent? ";
    cin >> rent;

    // get electricity cost
    cout << "How much did the estimated electricity cost? ";
    cin >> elec;

    // calculate total costs, markup, and markup percentage
    double expenses = merch + salary + rent + elec;
    double markup = (netProfit * merch + expenses)/(1 - sale); 
        // ? (1 / ((1 - sale) * merch)) * (expenses + merch * netProfit) 
    double markupPer = (markup * 100) / merch;
  
    // print percentage
    cout << fixed << setprecision(2);
    cout << "Markup merchandise by " << markupPer << "%" << endl;

    return 0;
}