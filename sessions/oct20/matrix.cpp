#include <vector>
#include <print>
using namespace std;

class TwoByTwo {
private:
  vector<float> elements{1,2,3,4};
public:
  float get( int i,int j ) { return elements[2*i+j]; };
  float& operator[]( int i,int j ) {
    return elements[2*i+j]; };
};

int main() {
  TwoByTwo mat;
  float elt11 = mat[1,1];
  println("{}",elt11);
  
  mat[1,1] += 2.71; // ?
  elt11 = mat[1,1];
  println("{}",elt11);

  return 0;
}

// C-b : letter back
// ESC b : word back
// ditto f
