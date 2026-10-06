class Point1 {
public: // NOT A GOOD IDEA
  float x,y;
public:
  Point1( float x,float y ) {}; // INCOMPLETE
  float dist() { return 2.f; }; // JUST WRONG
};

class Point2 {
private: // BEST PRACTICE
  float x,y;
public:
  Point2( float x,float y ) {}; // INCOMPLETE
  float dist() { return 2.f; }; // JUST WRONG
};

int main() {

  Point1 p1(1,2);
  p1.x = 2; // you don't want this to be possible

  Point2 p2(2,3);
  // THIS DOES NOT COMPILE  p2.x = 2;

  return 0;
}

// ESC x repl-st : global replace
// note: if there is a region active, the "global" to the region
// ESC % : query replace
