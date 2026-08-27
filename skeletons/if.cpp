/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2019-2026 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** if.cxx : very simple conditional example
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
#include <print>
using std::println;

int main() {

  int i;
  cin >> i;
  if ( i>100 )
    println
      ("Number {} had more than 2 digits",
       i);

  return 0;
}

