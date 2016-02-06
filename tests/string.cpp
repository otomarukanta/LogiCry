#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "src/string.hpp"

TEST_CASE( "String", "[string]" ) {
  std::string str = "A,B,C";
  auto arr = split(str, ",");

  REQUIRE(arr.size() == 3);
  REQUIRE(arr[0] == "A");
  REQUIRE(arr[1] == "B");
  REQUIRE(arr[2] == "C");
}
