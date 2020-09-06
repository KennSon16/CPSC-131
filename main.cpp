#include "Book.hpp"
#include <iomanip>          // setpercision
#include <iostream>         // showpoint(), fixed()
#include <memory>           // unique_ptr
#include <string>
#include <string_view>      //
#include <utility>          // move()
#include <vector>

int main() {
  Book myBook;
  std::string comma = ", ";
  
  std::cin >> myBook;
  std::cout << myBook << std::endl;
  return 0;
}
