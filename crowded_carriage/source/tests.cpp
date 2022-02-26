#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"

TEST_CASE ("train1", "[1]") {
    REQUIRE (findASeat(20, {3, 5, 4, 2}) == 3);
}

TEST_CASE ("train2", "[2]") {
    REQUIRE (findASeat(1000, {50, 20, 80, 90, 100, 60, 30, 50, 80, 60}) == 0);
}

TEST_CASE ("train3", "[3]") {
    REQUIRE (findASeat(200, {35, 23, 40, 21, 38}) == -1);
}

TEST_CASE ("train4", "[4]") {
    REQUIRE (findASeat(200, {35, 23, 18, 10, 40}) == 2);
}

TEST_CASE ("train5", "[5]") {
    REQUIRE (findASeat(21, {6, 3, 7}) == 1);
}

TEST_CASE ("train6", "[6]") {
    REQUIRE (findASeat(11037, {1839, 0, 0}) == 0);
}


int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
