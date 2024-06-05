#include <iostream>
using namespace std;

int main() {
   // initialize array for test scores
    int tests = 5;
    double scores[tests];

    // get test scores
    for (int i = 0; i < tests; i++) {
        cout << "What is your score for test #" << i+1 << ": ";
        cin >> scores[i];
    }

    // calculate total score
    double totalScore;
    for (int i = 0; i < tests; i++) {
        totalScore += scores[i];
    }

    // calculate and print average score
    double avgScore = totalScore/tests;
    cout << "Your average test score is: " << avgScore << endl;
    
    // return
    return 0;
}