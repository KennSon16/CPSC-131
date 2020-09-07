#include "Book.hpp"
#include <iomanip>          // setpercision
#include <iostream>         // showpoint(), fixed()
#include <memory>           // unique_ptr
#include <string>
#include <string_view>      //
#include <utility>          // move()
#include <vector>

int main() {
  std::cout << std::showpoint << std::fixed << std::setprecision(2);
  std::cout << "Welcome to Forgotten Books, a bookstore filled with books from all nations.  Place books into your shopping cart by entering each book's information." << std::endl;
  std::cout << "  enclose string entries in quotes, separate fields with comas" << std::endl;
  std::cout << "  Enter CTL-Z (Windows) or CTL-D (Linux) to quit." << std::endl;

  // using smart pointers to remember books
  std::vector<std::unique_ptr<Book>> books;

  //
  Book book;
  while( std::cout << "Enter ISBN, Title, Author, and Price\n", std::cin >> book ) {
    books.emplace_back(std::make_unique<Book>( std::move( book ) ) );
    std::cout << "Item added to books: " << *books.back() << "\n\n";
  }

  std::cout << "Here is an itemized list of the items in your shopping cart:" << '\n';

  for(unsigned long int i = books.size(); i > 0; --i) {
    std::cout << *books[i-1] << '\n';
  }
  return 0;
}
