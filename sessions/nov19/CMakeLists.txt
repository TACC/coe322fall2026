cmake_minimum_required( VERSION 3.20 )
project( Linkedlist
  DESCRIPTION "Linkedlist homework"
  VERSION 1.0 )

add_executable( matvec )
target_sources( matvec PRIVATE
  matvec.cpp 
)
target_compile_features( matvec PRIVATE cxx_std_23 )

find_package( Eigen3 REQUIRED )
target_link_libraries(
  matvec PUBLIC Eigen3::Eigen )
install( TARGETS matvec DESTINATION . )
