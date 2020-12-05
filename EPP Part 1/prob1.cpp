#include <iostream>
#include <string>

using namespace std;

// Implement printArray here


// Implement getElement here


// EDIT CODE BELOW ONLY FOR TESTING (YOUR CODE WILL BE GRADED WITH DIFFERENT TESTS)

int main() {
  {
    int myarray[100] = {30, 20, 5, 10, 24};
    int n = 5;
    cout << "Contents of array : ";
    printArray(myarray, n);
    if (getElement(myarray, n) == 24)
	  cout << "PASSED" << endl;
	else
	  cout << "Result did not match expected answer: 24" << endl;
  }
  {
    int myarray[100] = {15, 24, 30, 10, 5};
    int n = 5;
    cout << "Contents of array : ";
    printArray(myarray, n);
    if (getElement(myarray, n) == 24)
	  cout << "PASSED" << endl;
	else
	  cout << "Result did not match expected answer: 24" << endl;
  }
  return 0;
}
