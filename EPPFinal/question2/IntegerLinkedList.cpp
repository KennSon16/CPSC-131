// ADD ANSWER TO THIS FILE

#include "IntegerLinkedList.h"

bool IntegerLinkedList::checkList() {
  // COMPLETE THIS FOR PROBLEM 2
  return true;// dummy value to stop warnings while doing Problem 3. Remove this line.

}

bool IntegerLinkedList::checkRecurse (SNode *ptr) {
  // COMPLETE THIS FOR PROBLEM 3
  return true;// dummy value to stop warnings while doing Problem 2. Remove this line.

}

void IntegerLinkedList::addFront(int x) {
  SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3
bool IntegerLinkedList::checkRecurseHelper () {
  return checkRecurse(head);
}
