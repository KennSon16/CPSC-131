#include <iostream>
#include <string>

using namespace std;

// Implement printArray here
void printArray(int userArray[], int index )
{
  for (auto i = 0; i < index; i++)
  {
    cout << userArray[i] << " ";
  }
    cout << endl;
  return;
}

// Implement getElement here
int getElement(int userArray[], int index )
{
  int max = userArray[0];
  int min = userArray[0];
  for (auto i = 0; i < index; i++)
  {
    if (userArray[i] > max) max = userArray[i];
    if (userArray[i] < min) min = userArray[i];
  }
  int secMax = min;
  for (auto i = 0; i < index; i++)
  {
    if (userArray[i] > secMax && userArray[i] != max) secMax = userArray[i];
  }
  return secMax;
}

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
