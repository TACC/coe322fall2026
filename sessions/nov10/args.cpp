#include <print>
using std::println;

#include "cxxopts.hpp"

int main( int argc,char **argv ) {
  cxxopts::Options options
    ("args","commandline arguments demo");
  options.add_options() // WEIRD!!
    ("h,help","Usage information")
    // curiouser and curiouser
    ("n,ntimes","number of times",
     cxxopts::value<int>()->default_value("0"))
    ;

  auto result= options.parse(argc, argv);
  if (result.count("help")>0) {
    println("{}",options.help());
    return 0;
  }

  auto number_of_times= result["ntimes"].as<int>();
  println("Using number of times: {}",number_of_times);

  return 0;
}
