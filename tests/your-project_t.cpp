#include "your-project/your-project.hpp"
#include <catch2/catch_test_macros.hpp>

using namespace yourproject;

TEST_CASE( "add_one", "[adder]" ){
  REQUIRE(add_one(0) == 1);
  REQUIRE(add_one(123) == 124);
  REQUIRE(add_one(-1) == 0);
}