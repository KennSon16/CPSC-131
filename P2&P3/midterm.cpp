#include <iostream>
#include <list>
#include <foward_list>
#include "DLinkedList.hpp"

public:
  Data_t minimum() {
    if (empty()) throw std::length_error ("attempted to find the minimum of an empty list");
    Node min = begin();
    Node comp = begin();
    return minimum(min, comp)
  }
private:
  Data_t minimum(node min, node comp) {
    if (min > comp) min = comp;
    if (comp = end()) return min();
    min = mid->nextNode;
    comp = comp->nextNode;
    return minimum(min, comp)
  }
cd S
