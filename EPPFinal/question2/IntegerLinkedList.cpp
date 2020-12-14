// ADD ANSWER TO THIS FILE

#include "IntegerLinkedList.h"

int IntegerLinkedList::count(int compare) {
  int counter = 1;
  SNode *temp = head;
  while (temp != nullptr)
  {
    if (temp->elem == compare) break;
    temp = temp->next;
    counter++;
  }
  return counter;
}

// COMPLETE THIS FOR PROBLEM 2


int IntegerLinkedList::countRecurse (SNode *ptr, int compare) {
  if(ptr == nullptr)
  {
    return 0; //base case if not found
  }
  if(ptr->elem == compare)
  {
    return countRecurse(ptr->next, compare) + 1;
  }
  return countRecurse(ptr->next, compare);
}

void IntegerLinkedList::addFront(int x) {
  SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
}

// recursion helper function called from main for PROBLEM 3
int IntegerLinkedList::countRecurseHelper (int compare) {
  return countRecurse(head, compare);
}
