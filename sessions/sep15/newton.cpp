#include <print>
#include <cmath>
// nothing too wrong with:#include "math.h"

int main() {
  auto f = [] ( double x ) -> double {
    return x*x-2.5; };
  auto fprime = [] (double x) -> double {
    return 2*x; };


  double x=1;
  for (;;) {
    double fx = f(x);
    if ( std::abs(fx)<1.e-5) break;
    auto dfdx = fprime(x);
    x = x-fx/dfdx;
    std::println( "At x={}, fx={}",x,fx );
  }
  return 0;
}

/*
 * Exercise 2:
 */
  // option 1
  xroot = newton_root(f,fprime);
  // option 2
  xroot = newton_root
    (
     [] ( double x ) -> double {
       return x*x-2.5; },
     [] (double x) -> double {
       return 2*x; }
     );
