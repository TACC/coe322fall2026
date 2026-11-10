cmake_minimum_required( VERSION 3.20 )
project( Linkedlist
  DESCRIPTION "Linkedlist homework"
  VERSION 1.0 )

add_executable( args )
target_sources( args PRIVATE
  args.cpp 
)
target_compile_features( args PRIVATE cxx_std_23 )

find_package( PkgConfig REQUIRED )
pkg_check_modules( OPTS REQUIRED cxxopts )
target_include_directories(
  args PUBLIC
  ${OPTS_INCLUDE_DIRS}
)

install( TARGETS args DESTINATION . )
