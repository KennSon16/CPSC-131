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
  Book myBoo2;
  std::cout << std::showpoint << std::fixed << std::setprecision(2);
  std::cout << "Welcome to Forgotten Books, a bookstore filled with books from all nations.  Place books into your shopping cart by entering each book's information." << std::endl;
  std::cout << "  enclose string entries in quotes, separate fields with comas" << std::endl;
  std::cout << "  Enter CTL-Z (Windows) or CTL-D (Linux) to quit." << std::endl;
  std::cin >> myBook;
  std::cout << myBook << std::endl;
  std::cin >> myBook;
  std::cout << myBook << std::endl;
  return 0;
}
