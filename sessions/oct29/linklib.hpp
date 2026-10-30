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
  void insert( int value ) {
    if (head==nullptr)
      head = make_shared<Node>(value);
    else
      throw("I do not know how to insert in a non-empty list");
  };
  int length() {
    if (head==nullptr)
      return 0 ;
    else
      return head->length();
  };
};
  
