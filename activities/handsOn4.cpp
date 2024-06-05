#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // initialize numbers
    int size = 5;
    double decimals[size];

    // get decimals and add to total
    double total;
    for (int i = 0; i < size; i++) {
        cout << "Enter decimal numbers (#" << i+1 << "): ";
        cin >> decimals[i];
        total += decimals[i];
    }

    // round to nearest integer
    int sum = int(round(total));

    cout << total << endl;
    cout << sum;
    return 0;
}