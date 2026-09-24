#include <vector>
#include <functional>
using namespace std;

float norm( vector<float> x ) { };

float norm_p( vector<float> x,int p ) {
  //  return p-root-of-sum-of-p-powers;
};

void normalize
    (
     /* arg 1 : vector */ vector<float> &x,
     /* arg 2 : norm function */ function< float(vector<float>) > norm_function
     ) {
  
}

int main() {
  vector<float> vec;
  int p;

  // ???  normalize( vec,norm ); ???

  /*
    Not quite:
    normalize( vec," norm_p " );
  */
  normalize( vec,
	     [p] ( vector<float> v ) -> float { return norm_p(v,p); }
	     );
}

