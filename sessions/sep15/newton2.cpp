#include <print>
#include <cmath>
// nothing too wrong with:#include "math.h"

double newton_root
    ( function< double(double) > f,
      function< double(double) > fprime ) {
  ...
    };

int main() {
  auto f = [] ( double x ) -> double {
    return x*x-2.5; };
  auto fprime = [] (double x) -> double {
    return 2*x; };

/*
 * Exercise 2:
 */
  // option 1
  xroot = newton_root(f,fprime);
  // option 2
  xroot = newton_root
    (
     [] ( double x ) -> double { return x*x-2.5; },
     [] (double x) -> double { return 2*x; }
     );

  return 0;
}

