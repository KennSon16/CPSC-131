#include "Book.hpp"
#include <iomanip>          // setpercision
#include <iostream>         // showpoint(), fixed()
#include <memory>           // unique_ptr
#include <string>
#include <string_view>      //
#include <utility>          // move()
#include <vector>

int main() {
    std::string_view  userIsbn;
    std::string_view  userTitle;
    std::string_view  userAuthor;
    std::double       user Price;
    std::vector<Book> bookStuff;
    //create pointer that points at the four stuff
    //while loop to add to take in strings and int for each book

    while(std::cout << "Enter ISBN, Title, Author, and Price" << '\n', std::cin >> bookStuff;){

    }




    return 0;
}
