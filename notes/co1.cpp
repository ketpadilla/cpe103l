#include <iostream>
#include <string>
using namespace std;

int links();
void basics();
int perimAreaa();
void measure();
int loops();
void eofLoop();

int main() {
  /* // * Lec1
  basics();
  perimArea(); // call perimArea
  measure();
  */

  /* // * Lec2 
  excused
  */

  /* // * Lec3
  CONTROL STRUCTURES II (REPETITION)
  * Repetition
  - reduces manual programming
  
  * TYPES 
  1. WHILE 
  - statement will execute as long as the condition is true
  - initialization of variables are made before the loop's initialization
    ! while (condition) {
    !    statement
    ! }

  2. FOR
  - while loop but initialization of variables are made during the initialization of the loop
    ! for (condition) {
    !  
    ! }

  3. DO-WHILE
  ! do {
  !   statement
  ! } while (condition)

  * CASES
  1. Counter-controlled loops
  2. Sentinel Controlled loops
  3. flag-controlled loops
  4. EOF-controlled loops

  * INFINITE LOOP
  ! use (;;) or (true)

  */
  // loops();
  eofLoop();
}

int links() {
  /*
    ? reference: https://github.com/ketpadilla/CPA.Cplusplus/tree/main/notes
    ? online ide: https://www.onlinegdb.com/
  */ 
  return 0;
}


int historyComputers() {
  // ? https://youtu.be/gjVX47dLlN8?si=8LC-fNC0aJHSLq_Q
  return 0;
}


void basics() {
  /* // * BASICS
    * #include
    to include a library 

    * iostream
    library for input and output

    * using namespace std;
    to use the standard namespace

    * COUT
    output data to console (standard output)

    * endl
    end line, creates a new line
  */

  // * EXAMPLE 1
  // print your full name, program, and location of residence
  cout << "Kristian Emmanuel T. Padilla" << endl;
  cout << "Computer Engineering" << endl;
  cout << "Bulacan" << endl;
}


int perimArea() {
  // * EXAMPLE 2
  // Calculate the perimeter and area with user-inputted 
  int len, wid;

  // Get length
  cout << "Length: ";
  cin >> len;

  // Get width
  cout << "Width: ";
  cin >> wid;

  // Calculate perimeter and area
  int perimeter = 2 * (len + wid);
  int area = len * wid;

  // Output perimeter and area
  cout << "Perimeter: " << perimeter << endl;
  cout << "Area: " << area << endl;

  return 0;
}


void measure() {
  int feet, inches;
  cout << "Measure (feet): ";
  cin >> feet;
  
  cout << "Measure (inches): ";
  cin >> inches;

  cout << feet << "ft and " << inches << "in" << endl;
}


int loops() {
  // * examples are counter-controlled
  // get n (loop control variable)
  int n;
  cout << "n = ? ";
  cin >> n;

  // while loop
  int i = 0;
  while (i <= n) {
    cout << "While loop iteration " << i << endl;
    i = i + 1;
  }

  // for loop
  for (int j = 0; j <= n; j++) {
    cout << "For loop iteration " << j << endl;
  }

  // do-while loop
  int k = 0;
  do {
    cout << "Do-while loop iteration " << k << endl;
    k++;
  } while (k <= n);

  return 0;
}


void eofLoop() {
  int sum = 0;
  int num;
  
  cout << "Press any non-numeric characters, besides enter, to exit." << endl;

  // ! only exists when alphabetical character is inputted
  do {
    cout << "Input number: ";
    cin >> num;

    sum = sum + num;

  } while (cin);

  cout << "Sum: " << sum << endl;
}