#include <exception>
#include <iostream>
#include <typeinfo>

#include "Book.hpp"
#include "BookList.hpp"




namespace
{
  void basicScenario()
  {
    // Let's start a book list
    BookList booksToRead = {{"Inviable Man"           },
                            {"Moby Dick"              },
                            {"Les Mis"                },
                            {"A Tale of Two Cities"   }};

    // Changed my mind, I want to make sure I read Les Mis first so I'm going to move that to the top of my list
    booksToRead.moveToTop( {"Les Mis"} );

    // Let's see what's on the list so far
    std::cout << "My Book List" << booksToRead << "\n\n";

    // Yay, no.  Need to add a few more
    booksToRead += {{"Ulysses"          },
                    {"The Color Purple" }};


    // My roommate also has a book list
    BookList roommatesList = {{"Hunger Games", "S. Collins"               },
                              {"Hunger Games", "Suzanne Collins"          },
                              {"Les Mis"                                  },
                              {"Secret Garden", "Frances Hodgson Burnett" },
                              {"Charlie & Choc Factory"                   }};

    std::cout << "My roommate's Book List" << roommatesList << "\n\n";

    // Let's combine the lists (if different) and go shopping
    if( booksToRead != roommatesList ) booksToRead += roommatesList;


    // Oops, forgot one of my favorites.  Let's add that right before '2 cities.
    booksToRead.insert( {"Oliver Twist", "Charles Dickens"}, booksToRead.find( {"A Tale of Two Cities"} ) );

    // Time is short, let me take one off the list!
    booksToRead.remove( {"Secret Garden", "Frances Hodgson Burnett"} );

    // Now let's see what's on the list
    std::cout << "Combined Book Lists" << booksToRead << "\n\n";



    // Did you get it right?
    BookList expectedResults = {{"Les Mis"                         },
                                {"Inviable Man"                    },
                                {"Moby Dick"                       },
                                {"Oliver Twist", "Charles Dickens" },
                                {"A Tale of Two Cities"            },
                                {"Ulysses"                         },
                                {"The Color Purple"                },
                                {"Hunger Games", "S. Collins"      },
                                {"Hunger Games", "Suzanne Collins" },
                                {"Charlie & Choc Factory"          }};

    std::cout << "\nExpected results:" << expectedResults                                        << "\n\n"
              << "\nActual results:"   << booksToRead                                            << "\n\n"
              << "\nTest results:  "   << ( booksToRead == expectedResults  ? "PASS"  :  "FAIL") << '\n';
  }
}




int main()
{
  try
  {
    basicScenario();


    ///////////////////////// TO-DO (1) //////////////////////////////
     /// Create, manipulate, and display your own BookList object here.  Not looking for anything specific but expect you to
     /// demonstrate you can use the BookList class to create, update, and display the contents of a book list.

     // Let's start a book list for myself
       BookList kennBooks = {{"Cat in the Hat"           },
                             {"Namesake"                 },
                             {"JoJo Bizzare Adventure" },
                             {"Micky Mouse Club House"   }};
      std::cout << '\n' << "Books intially in kennBooks: " << kennBooks << '\n' << '\n';
     // I wanna look at what my group mates are reading
       BookList stevenBooks =  {{"Simp City"                },
                                {"Burn Me Alive"            },
                                {"Japanese Horror Stories"  },
                                {"18 Cowboys"               }};
       std::cout << "Books in stevenBooks" << stevenBooks << '\n' << '\n';

       BookList jongBook =  {{"Katy Perry Conspiracy Theories"  },
                             {"Of Mice and Men"                 },
                             {"The Bad Boys"                    }};
       std::cout << "Books in jongBooks" << jongBook << '\n' << '\n';
    //I want to add their books too my list!!
      if( kennBooks != stevenBooks )
      {
         kennBooks += stevenBooks;
      }
      if( kennBooks != jongBook )
      {
        kennBooks += jongBook;
      }
    // Okay maybe I don't what all of their books...
        kennBooks.remove( {"Simp City"} );
        kennBooks.remove( {"18 Cowboys"} );
    // Okay I think I might need this book.
        kennBooks.insert({"How to stay awake in class", "Bob Ross"});
    // I think I'll read this book first.
        kennBooks.moveToTop({"How to stay awake in class", "Bob Ross"});
    //Okay lets cout what we got
        std::cout << "Books in kennBooks: "<< kennBooks << '\n' << '\n';
      //   BookList expectedBooklist = {{"How to stay awake in class", "Bob Ross"},
      //                                {"Cat in the Hat"                        },
      //                                {"Namesake"                              },
      //                                {"JoJo Bizzare Adventure"                },
      //                                {"Micky Mouse Club House"                },
      //                                {"Burn Me Alive"                         },
      //                                {"Japanese Horror Stories"               },
      //                                {"Katy Perry Conspiracy Theories"        },
      //                                {"Of Mice and Men"                       },
      //                                {"The Bad Boys"                          }};
      // if (expectedBooklist == kennBooks)
      // {
      //   std::cout << "Yessir" << std::endl;
      // } FOR TESTING PURPOSES
    /////////////////////// END-TO-DO (1) ////////////////////////////
  }

  catch( const std::exception & ex )
  {
    std::cerr << "Fatal Error:  unhanded exception \"" << typeid( ex ).name() << "\"\n"
              << ex.what() << '\n';
  }
}
