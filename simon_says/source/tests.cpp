#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"

TEST_CASE ("simon1", "[1]") {
    REQUIRE (simonSays({1, 2, 3, 4, 5}, {0, 1, 2, 3, 4}) == true);
}

TEST_CASE ("simon2", "[2]") {
    REQUIRE (simonSays({1, 2, 3, 4, 5}, {5, 5, 1, 2, 3}) == (false));
}

TEST_CASE ("simon3", "[3]") {
    REQUIRE (simonSays({1, 2}, {5, 1}) == true);
}

TEST_CASE ("simon4", "[4]") {
    REQUIRE (simonSays({1, 2, 3, 4, 5}, {0, 1, 2, 3, 3}) == false);
}

TEST_CASE ("simon5", "[5]") {
    REQUIRE (simonSays({1, 2, 3}, {0, 1, 2}) == true);
}


int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
