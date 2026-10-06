#include <cmath>

class Point {
private:
  float x,y;
public:
  Point(float in_x,float in_y) {
    x = in_x; y= in_y; };
  float distance_to_origin() {
    return sqrt( x*x + y*y );
  };
  float dx( Point q ) { return x-q.x; }
  float distance( Point q ) {
    float dx = x-q.x, dy = y-q.y; // or use dx function
    return sqrt( dx*dx + dy*dy );
  };
  float angle() {
    return std::atan(y/x);
  };
};

int main() {
  Point p1(1.0,1.0);
  Point p2(2,2);

  float dpq = p1.distance(p2);

  float d = p1.distance_to_origin();
  float a = p1.angle( );

  return 0;
}

// ESC < : beginning of file
// ESC > : end of file
// C-i : fix indentation

// Regular expressions:
// [0-9]* : any number of digits
// ^ : beginning of line
// ESC x repl-reg RETURN ^[0-9]*     by nothing
