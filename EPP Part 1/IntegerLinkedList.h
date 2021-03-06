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
    if (ptr == nullptr) return 0; //base case
    return ptr->elem + getSumRecurse(ptr->next); // COMPLETE THIS FOR PROBLEM 3
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

  int getSum() // COMPLETE THIS FOR PROBLEM 2
  {
    SNode *temp = head;
    int sum = 0;
    while (temp != nullptr)
    {
      sum += temp->elem;
      temp = temp->next;
    }
    return sum;
  }
  // recursion helper function called from main for PROBLEM 3
  int getSumRecurseHelper () {
    return getSumRecurse(head);
  }

};
