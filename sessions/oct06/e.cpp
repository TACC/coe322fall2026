#include <print>

int main() {
  for (int n=1; n<1000000000; n*=10) {
    // expression is 1+1/n
    float one_plus_one_over_n = 1+1.f/n;
    // e is the nth power of an expression
    // so loop n times a multiplication:
    float e=1.f;
    for ( int mult=0; mult<n; mult++ )
      e *= one_plus_one_over_n;
    std::println( "for n={}, e={}",n,e );
  }
}
