#include <print>
#include <format>
#include <string>

#include <cmath>

class Point {
private:
  float x,y;
public:

  // constructor:
  // same name as the class
  // no return type
  Point(float in_x,float in_y) {
    x = in_x; y= in_y; };
  // re-introduce the default constructor:
  // Usually a BAD IDEA
  Point() = default;

  float xvalue() { return x; };
  // scaling function
  // function name "scale"
  // input parameter "a"
  // return type "Point"
  Point scale( float a ) {
    // just to illustrate `this'
    // but it's not actually necessary here
    Point scaledpoint(this->x*a,y*a);
    return scaledpoint;
  };
  // stuff from last time
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
  Point operator+(Point q) {
    return Point( x+q.x,y+q.y );
  };
  Point operator*( float a ) {
    return Point( a*x,a*y );
  };
  Point halfway(Point q) {
    return (*this+q)*.5; // wrong
  }
  std::string as_string() const {
    return std::format("({},{})",x,y);
  };
};

template<>
class std::formatter<Point>{
public:
  constexpr auto parse( std::format_parse_context& ctx ) {
    return ctx.begin(); };
  auto format( const Point& z,std::format_context& ctx ) const {
    return std::format_to
      ( ctx.out(),"{}",z.as_string()
	);
  };
};

class Rectangle {
private:
  // I'm sticking with this design
  Point bottomleft;
  float width,height;
public:
  // I want two constructors
  // 1. from point & w/h
  Rectangle( Point bl,float w,float h )
    : bottomleft(bl),width(w),height(h) {};
  // 2. from Point bl/tr
  Rectangle( Point bl,Point tr ) {
    // finish this second constructor
    // and submit in a `quiz6' directory
  };
  float area() {
    return width*height;
  };
  float rightedge_x() {
    return bottomleft.xvalue() + width;
  };
};

int main() {
  Point p1(1.0,1.0);
  Point p2(2,2);

  float dpq = p1.distance(p2);

  float d = p1.distance_to_origin();
  float a = p1.angle( );

  // This will not work
  Point p3;
  p3 = p1.halfway(p2);

  Point h = (p1+p2)*.5f;
  std::println("Halfway between {} and {} is {}",p1,p2,h);
  Point k = p1.halfway(h);

  Rectangle r(p1,p2);

  return 0;
}

// C-l : current line to top/bottom/middle of screen
