/*
 * This file illustrates mutual recursion:
 * - function `f' calls `g' and
 * - function `g' calls `f'. 
 * This requires a declaraction of `g' prior to the definition of `f'.
 */

#include <print>
using std::println;

int g(int);

int f(int i) {
  if (i==0) return 0;
  else
    return g(i+1);
}

int g(int i) {
  println( "{},{}",i,j )
  int tmp = f(2*i);
  return tmp+1;
}

// C-z : suspend
// fg : bring the suspended process back
