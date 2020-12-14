//
// EDIT THIS FILE ONLY FOR YOUR OWN TESTING
// WRITE YOUR CODE IN IntegerLinkedList.cpp
//

#include <iostream>
#include <string>
#include "IntegerLinkedList.h"

using std::string;
using std::cout;
using std::endl;
bool checkAnswer(const string &nameOfTest, bool received, bool expected);
bool checkAnswer(const string &nameOfTest, int received, int expected);

int main() {
    cout << "count elements equal to given number (recursive)\n";
    {
		IntegerLinkedList mylist;
		mylist.addFront(10);
		mylist.addFront(17);
		mylist.addFront(23);
		mylist.addFront(17);
		mylist.addFront(92);
		cout << "List: 92 -> 17 -> 23 -> 17 -> 10" << endl;
        checkAnswer("mylist.countRecurseHelper(92)", mylist.countRecurseHelper(92), 1);
        checkAnswer("mylist.countRecurseHelper(17)", mylist.countRecurseHelper(17), 2);
        checkAnswer("mylist.countRecurseHelper(12)", mylist.countRecurseHelper(12), 0);
     }
    {
		IntegerLinkedList mylist;
		mylist.addFront(17);
		cout << "List: 17" << endl;
        checkAnswer("mylist.countRecurseHelper(17)", mylist.countRecurseHelper(17), 1);
        checkAnswer("mylist.countRecurseHelper(12)", mylist.countRecurseHelper(12), 0);
     }
    {
		IntegerLinkedList mylist;
		cout << "List: empty" << endl;
        checkAnswer("mylist.countRecurseHelper(17)", mylist.countRecurseHelper(17), 0);
     }
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