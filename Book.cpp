#include <iostream>
#include <iomanip>
#include "Book.hpp"


//Insertion and Extraction Operators
// use std::quoted()
std::ostream & operator<<( std::ostream & stream, const Book & book ) {
const std::string delim =", " ;
  stream  << std::quoted( book.isbn()   ) << delim
          << std::quoted( book.title()  ) << delim
          << std::quoted( book.author() ) << delim
          << book.price();
  return stream;
}
std::istream & operator>>( std::istream & stream,       Book & book ) {
  char delim = ',';
  stream  >> std::quoted(book._isbn)    >> delim
          >> std::quoted(book._title)   >> delim
          >> std::quoted(book._author)  >> delim
          >> book._price;
  return stream;
}
Book::Book(std::string_view title, std::string_view author, std::string_view isbn, double price) {
   this-> _isbn = isbn;
   this-> _title = title;
   this-> _author = author;
   this-> _price = price;
 }
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
double Book::price () const{
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
  if ( (lhs.isbn() == rhs.isbn()) && (lhs.author() == rhs.author()) && (lhs.title() == rhs.title()) && (lhs.price() == rhs.price()) ) {
    return true;
  }
  return false;
}

bool operator!=( const Book & lhs, const Book & rhs ) {
  bool test = false;
  if ( (lhs.isbn() != rhs.isbn()) || (lhs.author() != rhs.author()) || (lhs.title() != rhs.title()) || (lhs.price() != rhs.price()) ) {
    return true;
  }
  return false;
}

bool operator< ( const Book & lhs, const Book & rhs ){
  bool test = false;
  if ( (lhs.isbn() < rhs.isbn()) && (lhs.author() < rhs.author()) && (lhs.title() < rhs.title()) && (lhs.price() < rhs.price()) ) {
    return true;
  }
  return false;
}

bool operator<=( const Book & lhs, const Book & rhs ){
  bool test = false;
  if ( (lhs.isbn() <= rhs.isbn()) && (lhs.author() <= rhs.author()) && (lhs.title() <= rhs.title()) && (lhs.price() <= rhs.price()) ) {
    return true;
  }
  return false;
}

bool operator> ( const Book & lhs, const Book & rhs ){
  bool test = false;
  if ( (lhs.isbn() > rhs.isbn()) && (lhs.author() > rhs.author()) && (lhs.title() > rhs.title()) && (lhs.price() > rhs.price()) ) {
    return true;
  }
  return false;
}

bool operator>=( const Book & lhs, const Book & rhs ){
  bool test = false;
  if ( (lhs.isbn() >= rhs.isbn()) && (lhs.author() >= rhs.author()) && (lhs.title() >= rhs.title()) && (lhs.price() >= rhs.price()) ) {
    return true;
  }
  return false;
}
