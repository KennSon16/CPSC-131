#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int * ptr = new int[5];
  cout << ptr << endl;

  for (int i = 0; i < 5; i++) {
    cout << "curr i = " << i << endl;
    cout << "curr ptr = " << ptr + i << endl;
    cout << "curr element = " << *(ptr+i) << endl;
  }

  *(ptr+1) += 3;

  for (int i = 0; i < 5; i++) {
    cout << "curr i = " << i << endl;
    cout << "curr ptr = " << ptr + i << endl;
    cout << "curr element = " << *(ptr+i) << endl;
  }

  // cout << *(ptr + 5) << endl;

  // *(ptr+5) += 3;
  //
  // cout << *ptr << endl;

  int *pt2 = ptr;
  delete [] ptr;

    for (int i = 0; i < 5; i++) {
      cout << "curr i = " << i << endl;
      cout << "curr ptr = " << pt2 + i << endl;
      cout << "curr element = " << *(pt2+i) << endl;
    }



  return 0;
}
