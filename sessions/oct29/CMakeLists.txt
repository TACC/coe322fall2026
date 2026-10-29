cmake_minimum_required( VERSION 3.20 )
project( Linkedlist
  DESCRIPTION "Linkedlist homework"
  VERSION 1.0 )

add_executable( linktester )
target_sources( linktester PRIVATE
  linktester.cpp linklib.hpp # linklib.cpp
)
target_compile_features( linktester PRIVATE cxx_std_23 )

find_package( PkgConfig REQUIRED )
pkg_check_modules( CATCH2 REQUIRED catch2-with-main )
target_include_directories(
  linktester PUBLIC
  ${CATCH2_INCLUDE_DIRS}
)
target_link_directories(
  linktester PUBLIC
  ${CATCH2_LIBRARY_DIRS}
)
target_link_libraries(
  linktester PUBLIC
  ${CATCH2_LIBRARIES}
)

install( TARGETS linktester DESTINATION . )
