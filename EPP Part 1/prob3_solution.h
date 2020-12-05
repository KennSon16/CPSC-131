// COMPLETE THIS FOR PROBLEM 3
int getSumRecurse (SNode *ptr) {
  if (ptr == nullptr) return 0; // base case
  return ptr->elem + getSumRecurse(ptr->next); // recursion case
}
