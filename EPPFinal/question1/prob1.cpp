#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
bool checkAnswer(const string &nameOfTest, bool received, bool expected);
bool checkAnswer(const string &nameOfTest, int received, int expected);

// Implement printString here



// Implement countChars here



// EDIT CODE BELOW *ONLY* FOR TESTING (ANY CODE BELOW WILL BE OVER-WRITTEN DURING GRADING WITH DIFFERENT TESTS)

int main() {
  cout << "count characters equal to given character\n";
  {
    string s = "california";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, countChars(s, 'c'), 1);
    checkAnswer(s, countChars(s, 'd'), 0);
    checkAnswer(s, countChars(s, 'a'), 2);
  }
  {
    string s = "a";
    cout << "Contents of array : ";
    printString(s);
    checkAnswer(s, countChars(s, 'c'), 0);
    checkAnswer(s, countChars(s, 'a'), 1);
  }

  return 0;
}


bool checkAnswer(const string &nameOfTest, bool received, bool expected) {
    if (received == expected) {
        cout << std::boolalpha << "PASSED " << nameOfTest << ": expected and received " << received << endl;
        return true;
    }
    cout << std::boolalpha << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << endl;
    return false;
}


bool checkAnswer(const string &nameOfTest, int received, int expected) {
    if (received == expected) {
        cout << "PASSED " << nameOfTest << ": expected and received " << received << endl;
        return true;
    }
    cout << "FAILED " << nameOfTest << ": expected " << expected << " but received " << received << endl;
    return false;
}