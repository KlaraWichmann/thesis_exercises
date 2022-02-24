#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"
#include <string.h>

TEST_CASE ("rockpaperscissors1", "[1]") {
    REQUIRE (faceInterval({1, 2, 5, 8, 3, 9}) == ":)");
}
    
TEST_CASE ("rockpaperscissors2", "[2]") {
    REQUIRE (faceInterval({5, 2, 8, 3, 11}) == ":(");
}

TEST_CASE ("rockpaperscissors3", "[3]") {
    REQUIRE (faceInterval({20, 50, 13, 60, 22, 72, 99}) == ":(");
}

TEST_CASE ("rockpaperscissors4", "[4]") {
    REQUIRE (faceInterval({11, 42, 83, 28, 47, 94}) == ":)");
}


int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
