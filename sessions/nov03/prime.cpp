#include <ranges>
namespace rng = std::ranges;
#include <algorithm>
  
int main() {

  auto isprime = [] ( int n ) {
    auto is_divisor =
      [n] ( int d ) -> bool {
	return n%d==0;
      };
    // going to test from 2 to n-1
    return rng::none_of( 
		rng::views::iota(2,n),
		is_divisor
		 );
  }; // end of the `isprime' lambda

  // lambda used by itself:
  // isprime(27)
  // however, that's not how you solve this exercise.

  return 0;

}
