#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"
#include <string.h>

TEST_CASE ("transformation1", "[1]") {
    REQUIRE (evenOddTransform({3, 4, 9}, 3) == std::vector<int>({9, -2, 15}));
}
    
TEST_CASE ("transformation2", "[2]") {
    REQUIRE (evenOddTransform({0, 0, 0}, 10) == std::vector<int>({-20, -20, -20}));
}

TEST_CASE ("transformation3", "[3]") {
    REQUIRE (evenOddTransform({1, 2, 3}, 1) == std::vector<int>({3, 0, 5}));
}

TEST_CASE ("transformation4", "[4]") {
    REQUIRE (evenOddTransform({55, 90, 830}, 2) == std::vector<int>({59, 86, 826}));
}

TEST_CASE ("transformation5", "[5]") {
    REQUIRE (evenOddTransform({55, 90, 830}, 0) == std::vector<int>({55, 90, 830}));
}

int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
