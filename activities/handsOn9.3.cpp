/*
Write a program that allows the user to enter the last names of five candidates in a local election and the number of votes received by each candidate. 
The program should then output each candidate’s name, the number of votes received, and the percentage of the total votes received by the candidate. 

Your program should also output the winner of the election. 
*/

#include <iostream>
#include <string>
using namespace std;


// prototypes
int tallyVotes(string candidate[5][3]);


// global variables
// candidate[5][3] = {last name, first name, votes}
string candidate[5][3] = {
  {"Domagoso", "Isko Moreno", "0"},
  {"Lacson", "Ping", "0"},
  {"Marcos", "Bongbong", "0"},
  {"Pacquiao", "Manny Pacman", "0"},
  {"Robredo", "Leni", "0"}
};


// main
int main() {
  // print candidate names
  cout << "Candidates: " << endl;
  for (int i = 0; i < 5; i++) {
    cout << i+1 << ". " << candidate[i][0] << ", " << candidate[i][1] << endl;
  }

  // tally votes
  tallyVotes(candidate);
  return 0;
}


// tally votes
int tallyVotes(string candidate[5][3]) {
  string name;

  cout << "Who's votes are we taking? ";
  getline(cin, name);

  // find name on list
  int index = -1;
  for (int i = 0; i < 5; i++) {
    if (name == candidate[i][0]) {
      index = i;
      break;
    }
  }

  // if name is not found
  if (index == -1) {
    cout << "Name not found. Please try again." << endl;
  } else {
    // get votes
    cout << "How many votes did " << candidate[index][0] << ", " << candidate[index][1] << " get? ";
    cin >> candidate[index][2];
    cin.ignore();
  }

  // check if all candidates have votes
  bool allHaveVotes = true;
  for (int i = 0; i < 5; i++) {
    if (candidate[i][2] == "0") {
      allHaveVotes = false;
      break;
    }
  }

  // if all candidates have votes
  int votesTotal;
  int votes[5];
  if (allHaveVotes) {
    int votesTotal = 0;
    int votes[5];

    // calculate total votes
    for (int i = 0; i < 5; i++) {
      votes[i] = stoi(candidate[i][2]);
      votesTotal += votes[i];
    }

    // get winner
    int winnerIndex = 0;
    for (int i = 1; i < 5; i++) {
      if (stoi(candidate[i][2]) > stoi(candidate[winnerIndex][2])) {
        winnerIndex = i;
      }
    }

    // print results
    cout << "Results: " << endl;
    for (int i = 0; i < 5; i++) {
      double percentage = (static_cast<double>(votes[i]) / votesTotal) * 100;
      cout << candidate[i][1] << " " << candidate[i][0] << " received " << candidate[i][2] << " votes (" << percentage << "%)." << endl;
    }
    cout << endl << "The winner is " << candidate[winnerIndex][1] << " " << candidate[winnerIndex][0] << " with " << candidate[winnerIndex][2] << " votes." << endl;

    return 0;
  } else {
    // recall function
    tallyVotes(candidate);
  }

  return 0;
}