#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"

TEST_CASE ("boxes1", "[1]") {
    REQUIRE (boxes({7, 1, 2, 6, 1, 2, 3, 5, 9, 2, 1, 2, 5}) == 5);
}

TEST_CASE ("boxes2", "[2]") {
    REQUIRE (boxes({2, 7, 1, 3, 3, 4, 7, 4, 1, 8, 2}) == 5);
}

TEST_CASE ("boxes3", "[3]") {
    REQUIRE (boxes({1, 3, 3, 3, 2, 1, 1, 9, 7, 10, 8, 6, 1, 2, 9}) == 8);
}

TEST_CASE ("boxes4", "[4]") {
    REQUIRE (boxes({4, 1, 2, 3, 5, 5, 1, 9}) == 3);
}

TEST_CASE ("boxes5", "[5]") {
    REQUIRE (boxes({3, 1, 2, 7, 2, 6, 1}) == 3);
}

TEST_CASE ("boxes6", "[6]") {
    REQUIRE (boxes({4, 6, 1, 9, 6, 1, 1, 9, 2, 9}) == 6);
}

TEST_CASE ("boxes7", "[7]") {
    REQUIRE (boxes({2, 2, 10, 10, 1, 5, 2}) == 4);
}

TEST_CASE ("boxes8", "[8]") {
    REQUIRE (boxes({9, 6, 2, 3, 1, 2, 4, 8, 3, 1, 3}) == 5);
}

TEST_CASE ("boxes9", "[9]") {
    REQUIRE (boxes({2, 5, 1, 6, 2, 9, 5, 2, 1, 6, 1, 6, 6, 1}) == 7);
}

TEST_CASE ("boxes10", "[10]") {
    REQUIRE (boxes({1, 2, 3, 2, 6, 4, 1}) == 3);
}

TEST_CASE ("boxes11", "[11]") {
    REQUIRE (boxes({1, 1, 2, 1, 2, 10, 2, 2, 5, 1, 5}) == 4);
}

TEST_CASE ("boxes12", "[12]") {
    REQUIRE (boxes({8, 3, 2, 1, 1, 2, 1, 3, 2, 1}) == 3);
}

TEST_CASE ("boxes13", "[13]") {
    REQUIRE (boxes({1, 5, 3, 1, 2, 3, 2, 6, 3, 1, 3, 8, 1}) == 5);
}

TEST_CASE ("boxes14", "[14]") {
    REQUIRE (boxes({8, 1, 1, 4, 7, 2, 1, 3, 1, 9, 7, 1, 5, 1, 1}) == 7);
}

TEST_CASE ("boxes15", "[15]") {
    REQUIRE (boxes({2, 3, 4, 10, 1, 2, 5, 1, 1, 1, 1, 8, 2, 1}) == 5);
}

TEST_CASE ("boxes16", "[16]") {
    REQUIRE (boxes({4, 6, 7, 3, 2, 2, 3, 1, 2, 2, 10, 3, 2}) == 6);
}

TEST_CASE ("boxes17", "[17]") {
    REQUIRE (boxes({9, 2, 3, 4, 1, 3, 1, 1, 3}) == 3);
}

TEST_CASE ("boxes18", "[18]") {
    REQUIRE (boxes({6, 2, 1, 9, 1, 8, 2, 8, 6, 6}) == 6);
}

TEST_CASE ("boxes19", "[19]") {
    REQUIRE (boxes({6, 9, 3, 8, 10, 4, 7}) == 7);
}

TEST_CASE ("boxes20", "[20]") {
    REQUIRE (boxes({4, 3, 1, 1, 1, 4, 7, 2, 1, 10, 1, 3, 8}) == 6);
}

TEST_CASE ("boxes21", "[21]") {
    REQUIRE (boxes({10}) == 1);
}

int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
