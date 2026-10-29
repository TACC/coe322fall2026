/*
 * These lines cause Catch2 to supply its own main
 */
#define CATCH_CONFIG_MAIN
#include "catch2/catch_all.hpp"

/*
 * We include the linked list functionality 
 * in a header file.
 * Later we may split this as header & implementation.
 */
#include "linklib.hpp"

TEST_CASE( "empty list has length zero" ) {
  List mylist;
  REQUIRE( mylist.length()==0 );
}

TEST_CASE( "inserting one element gives length 1" ) {
  List mylist;
  mylist.insert(5);
  REQUIRE( mylist.length()==1 );
}
