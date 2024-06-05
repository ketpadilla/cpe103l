#include <iostream>
using namespace std;

int main() {
   // initialize array for test scores and variable for total score
    int tests = 5;
    double scores[tests], totalScore;

    for (int i = 0; i < tests; i++) {
        // get test scores  
        cout << "What is your score for test #" << i+1 << ": ";
        cin >> scores[i];

        // calculate total score
        totalScore += scores[i];
    }

    // calculate and print average score
    double avgScore = totalScore/tests;
    cout << "Your average test score is: " << avgScore << endl;
    
    // return
    return 0;
}