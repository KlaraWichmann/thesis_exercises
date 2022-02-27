#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"
#include <string.h>

TEST_CASE ("positivedominant1", "[1]") {
    REQUIRE (isPositiveDominant({1, 1, 1, 1, -3, -4}) == false);
}

TEST_CASE ("positivedominant2", "[2]") {
    REQUIRE (isPositiveDominant({5, 99, 832, -3, -4}) == true);
}
    
TEST_CASE ("positivedominant3", "[3]") {
    REQUIRE (isPositiveDominant({5, 0}) == true);
}

TEST_CASE ("positivedominant4", "[4]") {
    REQUIRE (isPositiveDominant({0, -4, -1}) == false);
}

TEST_CASE ("positivedominant5", "[5]") {
    REQUIRE (isPositiveDominant({1, 2, 3, -1}) == true);
}

TEST_CASE ("positivedominant6", "[6]") {
    REQUIRE (isPositiveDominant({1, 0, 0, -1}) == false);
}

TEST_CASE ("positivedominant7", "[7]") {
    REQUIRE (isPositiveDominant({5, 4, 3, 0, 0, -1, -1, -2, -2}) == true);
}

TEST_CASE ("positivedominant8", "[8]") {
    REQUIRE (isPositiveDominant({52, 52, 52, -3, 2, 2, 2, -4}) == false);
}

TEST_CASE ("positivedominant9", "[9]") {
    REQUIRE (isPositiveDominant({3, 3, 3, 3, -1, -1, -1}) == false);
}


int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
