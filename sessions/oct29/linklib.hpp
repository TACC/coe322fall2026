#include <print>
using std::println;
#include <memory>
using std::make_shared,std::shared_ptr;

class Node {
private:
  int value;
  shared_ptr<Node> next{nullptr};
public:
  Node( int v ) : value(v) {};
  bool contains_value(int val) {
    /* stuff */
  };
  int length() {
    if (next==nullptr)
      return 1;
    else
      return 1+next->length();
  };
};

class List {
private:
  // make sure you initialize anything
  // that is not set in every constructor
  shared_ptr<Node> head{nullptr};
public:
  // this is better than: List() {}
  List() = default;
  bool empty() { return head==nullptr; };
  void insert( int value ) {
    if (empty())
      head = make_shared<Node>(value);
    else
      throw("I do not know how to insert in a non-empty list");
  };
  bool contains_value(int val) {
    if (empty())
      return false;
    else
      return head->contains_value(val);
  };
  int length() {
    if (empty())
      return 0 ;
    else
      return head->length();
  };
};
  
