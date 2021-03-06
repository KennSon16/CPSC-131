#pragma once

class SNode {
public:
  int elem;
  SNode *next;
};

class IntegerLinkedList {
private:
  SNode *head;
  bool checkRecurse (SNode *ptr); // for Problem 3; Implement in IntegerLinkedList.cpp

public:
  IntegerLinkedList(): head(nullptr) {}
  void addFront(int x);

  bool checkList(); // for Problem 2; Implement in IntegerLinkedList.cpp

  // recursion helper function called from main for PROBLEM 3
  bool checkRecurseHelper ();
};
