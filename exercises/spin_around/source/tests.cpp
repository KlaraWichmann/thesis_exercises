#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"
#include <string.h>

TEST_CASE ("rotations0", "[1]") {
    REQUIRE (spinAround({"left", "right", "left", "right"}) == 0);
}
    
TEST_CASE ("rotations1", "[2]") {
    REQUIRE (spinAround({"right", "right", "right", "right", "right", "right", "right", "right"}) == 2);
}

TEST_CASE ("rotations2", "[3]") {
    REQUIRE (spinAround({"left", "left", "left", "left"}) == 1);
}

TEST_CASE ("rotations3", "[4]") {
    REQUIRE (spinAround({}) == 0);
}

TEST_CASE ("rotations4", "[5]") {
    REQUIRE (spinAround({"left"}) == 0);
}

TEST_CASE ("rotations5", "[6]") {
    REQUIRE (spinAround({"right"}) == 0);
}

TEST_CASE ("rotations6", "[7]") {
    REQUIRE (spinAround({"right", "right", "right", "left", "right", "right"}) == 1);
}

TEST_CASE ("rotations7", "[8]") {
    REQUIRE (spinAround({"left", "left", "right", "left", "left", "left", "left", "left", "left", "right", "left", "left", "right", "right", "right", "right", "left", "left", "right", "right"}) == 1);
}

TEST_CASE ("rotations8", "[9]") {
    REQUIRE (spinAround({"right", "left", "left", "right", "left", "left", "right", "left", "right", "right", "left", "left", "right", "right", "right", "left", "left", "right"}) == 0);
}

TEST_CASE ("rotations9", "[10]") {
    REQUIRE (spinAround({"right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right", "right"}) == 10);
}

TEST_CASE ("rotations10", "[11]") {
    REQUIRE (spinAround({"left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left", "left"}) == 10);
}

int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
