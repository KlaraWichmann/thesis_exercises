#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"

TEST_CASE ("mystery1", "[1]") {
    REQUIRE (mystery_func(152) == 10);
}

TEST_CASE ("mystery2", "[2]") {
    REQUIRE (mystery_func(832) == 48);
}

TEST_CASE ("mystery3", "[3]") {
    REQUIRE (mystery_func(5511) == 25);
}

TEST_CASE ("mystery4", "[4]") {
    REQUIRE (mystery_func(19) == 9);
}

TEST_CASE ("mystery5", "[5]") {
    REQUIRE (mystery_func(133) == 9);
}


int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
