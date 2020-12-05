// ADD ANSWER TO THIS FILE

#pragma once

class SNode {
public:
  int elem;
  SNode *next;
};

class IntegerLinkedList {
private:
  SNode *head;

  int getSumRecurse (SNode *ptr) {
    return -1; // COMPLETE THIS FOR PROBLEM 3
  }

public:
  IntegerLinkedList() {
    head = nullptr;
  }
  
  void addFront(int x) {
    SNode *tmp = head;
	head = new SNode;
	head->next = tmp;
	head->elem = x;
  }
  
  int getSum(); // COMPLETE THIS FOR PROBLEM 2

  // recursion helper function called from main for PROBLEM 3
  int getSumRecurseHelper () {
    return getSumRecurse(head);
  }

};
