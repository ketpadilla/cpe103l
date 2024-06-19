/*
  Write a C++ function, smallestIndex, that takes as parameters an int array and its size and returns the index of the first occurrence of the smallest element in the array. 
  
  Also, write a program to test your function.
*/

#include <iostream>
#include <string>
using namespace std;

// prototypes
int smallestIndex(int arr[], int size);


// * main
int main() {
  int index;

  // test function
  // initialize array and its size
  int arr[] = {3, 7, 2, 1, 4, 9, 10, 2, 5, 1, 0, 7, 11, 54};
  int size = sizeof(arr)/sizeof(arr[0]);

  // get index of the first occurrence of the smallenst element in the array
  index = smallestIndex(arr, size);
  cout << "The smallest number can be found at index: " << index << endl;

  return 0;
}


// * find the index of the first occurrence of the smallenst element in the array
int smallestIndex(int arr[], int size) {
  // let the first number in the array be the smallest element
  int smallest = arr[0];
  int index = 0;

  // check if the next number is smaller than the previous number, if so, set as the new smallest number
  for (int i = 1; i < size; i++) {
    if (arr[i] < smallest) {
      smallest = arr[i];
      index = i;
    }
  }

  return index;
}