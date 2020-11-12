///////////////////////// TO-DO (1) //////////////////////////////
  /// Include necessary header files
  /// Hint:  Include what you use, use what you include
  #include "Book.hpp"
  #include "BookDatabase.hpp"
  #include <iostream>
  #include <fstream>
  #include <filesystem>
  #include <iterator>
/////////////////////// END-TO-DO (1) ////////////////////////////



// Return a reference to the one and only instance of the database
BookDatabase & BookDatabase::instance()
{
  std::string filename;
  // Don't forget to #include <filesystem> to get visibility to the exists() function
  //
  // Look for a prioritized list of database files in the current working directory to use
  if     ( std::filesystem::exists( "Open Library Database-Full.dat"   ) )filename = "Open Library Database-Full.dat";
  else if( std::filesystem::exists( "Open Library Database-Large.dat"  ) )filename = "Open Library Database-Large.dat";
  else if( std::filesystem::exists( "Open Library Database-Medium.dat" ) )filename = "Open Library Database-Medium.dat";
  else if( std::filesystem::exists( "Open Library Database-Small.dat"  ) )filename = "Open Library Database-Small.dat";
  else if( std::filesystem::exists( "Sample_Book_Database.dat"         ) )filename = "Sample_Book_Database.dat";


  static BookDatabase theInstance( filename );
  return theInstance;
}




// Construction
BookDatabase::BookDatabase( const std::string & filename )
{
  std::ifstream fin( filename, std::ios::binary );


  ///////////////////////// TO-DO (2) //////////////////////////////
    /// The file contains Books separated by whitespace.  A Book has 4 pieces of data delimited with a comma.  (This exactly matches
    /// the previous assignment as to how Books are read)
    ///
    ///       Field            Type            Notes
    ///  1.   Book's ISBN      String          Unique identifier (primary key), always enclosed in double quotes
    ///  2.   Book's Title     String          May contain spaces, always enclosed in double quotes
    ///  3.   Book's Author    String          May contain spaces, always enclosed in double quotes
    ///  4.   Book's Price     Floating Point  In dollars
    ///
    ///  Example:
    ///    "0001062417",  "Early aircraft",                 "Maurice F. Allward", 65.65
    ///    "0000255406",  "Shadow maker \"1st edition)\"",  "Rosemary Sullivan",   8.08
    ///    "0000385264",  "Der Karawanenkardinal",          "Heinz Gstrein",      35.18
    ///
    ///  Note: double quotes within the string are escaped with the backslash character
    ///
    // auto i = 0;
    // while (!fin.eof())
    // {
    //   std::cin >> _book_database.at(i);
    //   _book_database.insert(dBook);
    //   i++;
    // }
    Book dBook;
    while (fin >> dBook){
      _data.emplace(dBook.isbn(), dBook);
    }
  /////////////////////// END-TO-DO (2) ////////////////////////////

  // Note:  The file is intentionally not explicitly closed.  The file is closed when fin goes out of scope - for whatever
  //        reason.  More precisely, the object named "fin" is destroyed when it goes out of scope and the file is closed in the
  //        destructor. See RAII
}


///////////////////////// TO-DO (3) //////////////////////////////
  /// Implement the rest of the interface, including functions find and size
  ///
  /// In function find, don't walk the collection from beginning to end (an O(n) operation), find the item with a binary search (an
  /// O(log n) operation)

// Book * BookDatabase::find(const std::string & isbn)
// {
//   auto low  = _data.begin();
//   auto it   = _data.find(isbn);
//   auto mid  = _data.begin();
//   auto high = _data.end();
//   int  size = _data.size();
//   advance(mid, size / 2);        // puts mid in the middle index
//
//   while (*high >= *low)          // loop + dividing by 2 is log(n)
//   {
//     size = size / 2;           //
//     if ( *it > *mid )            // these if statements
//     {
//       low = mid.next();       // mid + 1
//       advance(mid,size);
//     }
//     else if (*it < *mid)
//     {
//       high = mid.prev();      // changes high to mid - 1
//       advance(mid,-1 * size);
//     }
//     else
//     {
//       return *mid;
//     }
//   }
// return nullptr;   // not found
// }
Book * BookDatabase::find(const std::string & isbn)
{
  if (_data.find(isbn) )
  {
    return _data.find(isbn);
  }
  else
  {
    return nullptr;
  }
}

/////////////////////// END-TO-DO (3) ////////////////////////////
