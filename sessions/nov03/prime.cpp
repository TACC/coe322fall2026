int main() {

  auto isprime = [] ( int n ) {
    auto is_divisor =
      [n] ( int d ) -> bool {
	return n%d==0;
      };
    // going to test from 2 to n-1
    none_of( 
	    rng::views::iota(2,n),
	    is_divisor
	     );
  };

  return 0;

}
