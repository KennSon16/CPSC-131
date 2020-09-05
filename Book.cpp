#include <iosteam>
//#include "Book.hpp"


//Insertion and Extraction Operators
// use std::quoted()
std::ostream & operator<<( std::ostream & stream, const Book & book ) {
  stream << book -> isbn() << book -> title() << book -> author() << book -> price() << endl;
  return stream;
}
std::istream & operator>>( std::istream & stream,       Book & book ) {
  stream >> std::quoted(book._isbn);
  stream >> book._title;
  stream >> book._author;
  stream >> book._price;
  return stream;
}
// Book::Book(std::string_view title, std::string_view author, std::string_view isbn, double price) {
//    this-> _isbn = newIsbn;
//    this-> _title = newTitle;
//    this-> _author = newAuthor;
//    this-> _price = newPrice;
//  }
// Queries
std::string Book::isbn  () const{
  return this -> _isbn;
  }
std::string Book::title () const {
  return this-> _title;
}
std::string Book::author() const{
  return this-> _author;
}
std::double Book::price () const{
  return this-> _price;
}

// Mutators
void Book::isbn  ( std::string_view newIsbn   ){
  this-> _isbn = newIsbn;
}
void Book::title ( std::string_view newTitle  ){
  this-> _title = newTitle;
}
void Book::author( std::string_view newAuthor ){
  this-> _author = newAuthor;
}
void Book::price ( double newPrice  ) {
  this-> _price = newPrice;
}

//bool 6 checklist check    compare ISBN, author, title, price
// Relational Operators
bool operator==( const Book & lhs, const Book & rhs ) {
  if ( (lhs -> isbn() == rhs -> isbn()) && (lhs -> author() == rhs -> author()) && (lhs -> title() == rhs -> title()) && (lhs -> price() == rhs -> price()) ) {
    return true;
  }
  return false;
}

bool operator!=( const Book & lhs, const Book & rhs ) {
  bool test = false;
  if ( (lhs -> isbn() != rhs -> isbn()) || (lhs -> author() != rhs -> author()) || (lhs -> title() != rhs -> title()) || (lhs -> price() != rhs -> price()) ) {
    return true;
  }
  return false;
}

bool operator< ( const Book & lhs, const Book & rhs ){
  bool test = false;
  if ( (lhs -> isbn() < rhs -> isbn()) && (lhs -> author() < rhs -> author()) && (lhs -> title() < rhs -> title()) && (lhs -> price() < rhs -> price()) ) {
    return true;
  }
  return false;
}

bool operator<=( const Book & lhs, const Book & rhs ){
  bool test = false;
  if ( (lhs -> isbn() <= rhs -> isbn()) && (lhs -> author() <= rhs -> author()) && (lhs -> title() <= rhs -> title()) && (lhs -> price() <= rhs -> price()) ) {
    return true;
  }
  return false;
}

bool operator> ( const Book & lhs, const Book & rhs ){
  bool test = false;
  if ( (lhs -> isbn() > rhs -> isbn()) && (lhs -> author() > rhs -> author()) && (lhs -> title() > rhs -> title()) && (lhs -> price() > rhs -> price()) ) {
    return true;
  }
  return false;
}

bool operator>=( const Book & lhs, const Book & rhs ){
  bool test = false;
  if ( (lhs -> isbn() >= rhs -> isbn()) && (lhs -> author() >= rhs -> author()) && (lhs -> title() >= rhs -> title()) && (lhs -> price() >= rhs -> price()) ) {
    return true;
  }
  return false;
}
