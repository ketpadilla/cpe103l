/*
  Write a program that prompts the user to input a string and outputs the string in uppercase letters.
  (Use a character array to store the string.)
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  // initialize and get string
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  // get string lenght and store individual characters into a char array
  int size = sizeof(str)/sizeof(string);
  char ch[size];

  // store string in character array and convert to uppercase
  for (int i = 0; i < str.length() + 1; i++) {
    ch[i] = str[i];
    ch[i] = toupper(ch[i]);
  }

  // output string in uppercase
  cout << "String in uppercase: " << ch << endl;
  return 0;
}