cmake_minimum_required( VERSION 3.20 )
project( Collatz
  DESCRIPTION "Collatz homework"
  VERSION 1.0 )

add_executable( collatz )
target_sources( collatz PRIVATE
  callsomething.cpp myfunction.cpp myfunction.hpp )
target_compile_features( collatz PRIVATE cxx_std_23 )

install( TARGETS collatz DESTINATION . )
