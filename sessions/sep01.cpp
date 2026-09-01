void f() {
  int i;
  println("{}",i+1);
}

int main() {

  if ( true ) {
    f();
  }
  return 0;
}

// invoke emacs with file name:
// emacs myprog.cpp
// suspend with C-z
// then "fg" on the commandline 

// C-x C-s : save file
// C-x C-c : exit emacs

// C-n : next line
// C-p : prev line

// C-a : start of ine
// C-e : end of line

// C-f : forward char
// C-b : backward char

// ESC b : backward word
// M-b (meta, holdover from far bygone eras)

// C-space : set mark
// C-w : cut region
// C-y : paste region
