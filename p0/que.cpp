#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <forward_list>
#include <vector>
int main()
{

  // std::list<std::string> zoo = {"Lion", "Tiger", "Monkey", "Weasel", "Elephant", "Giraffe", "Okapi"};
  //
  // for (auto p = zoo.rbegin(); p != zoo.rend(); ++p) {
  //   std::cout << *p << '\n';
  //   if (std::next(p) != zoo.rend()) ++p;
  // }
  // // auto p = zoo.rend();
  // // std::advance( p, -5 );
  // // std::cout << *p << '\n';



 std::forward_list<std::string> desert = {"Cake", "Ice Cream", "Pudding", "Pizookie", "Apple Crisp", "S'mores", "Pie"};

//std::cout << *( ++desert.begin() ) << '\n';
std::cout << desert.rbegin()[4] << '\n';
// std::cout << *( desert.crend() ) << '\n';
// std::cout << desert[std::distance( desert.begin() + 1, desert.end() - 3 )] << '\n';
// std::cout << *( std::next( desert.begin(), 3 ) ) << '\n';
// auto p = desert.rend(); // syntax
// std::advance( p, -5 );
// std::cout << *p << '\n';


//  std::vector<std::string> rainbow = {"Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violette"};
//  std::cout << *( rainbow.begin() + 2 ) << '\n';
// std::cout << rainbow.rbegin()[3] << '\n';
//  //std::cout << *( rainbow.cend() ) << '\n';
//  // std::cout << *( rainbow.before_begin() ) << '\n'; //syntax
//  std::cout << rainbow[std::distance( rainbow.begin() + 1, rainbow.end() - 2 )] << '\n';
//  std::cout << *( std::next( rainbow.begin(), 5 ) ) << '\n';

//  auto p = rainbow.end();
// std::advance( p, -5 );
// std::cout << *p << '\n';
//
// auto p = rainbow.rend();
// std::advance( p, -2 );
// std::cout << *p << '\n';
}
