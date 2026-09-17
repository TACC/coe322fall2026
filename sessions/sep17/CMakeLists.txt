cmake_minimum_required( VERSION 3.12 )
project( hellocode
  DESCRIPTION "C++ programs separate compilation"
  VERSION 1.0 )

add_executable( hellocode )
target_sources( hellocode PRIVATE hello.cpp func.cpp func.hpp )
target_compile_features( hellocode PRIVATE cxx_std_23 )

install( TARGETS hellocode DESTINATION . )
