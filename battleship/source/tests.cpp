#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"

TEST_CASE ("battleship1", "[1]") {
    REQUIRE (fire({
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'},
    },"A1") == "splash");
}

TEST_CASE ("battleship2", "[2]") {
    REQUIRE (fire({
        {'.', '.', '.', '*', '*'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '*', '.', '.', '.'},
        {'.', '.', '*', '*', '.'},
    },"C2") == "BOOM");
}

TEST_CASE ("battleship3", "[3]") {
    REQUIRE (fire({
        {'.', '.'},
        {'*', '*'}
    },"B1") == "BOOM");
}

TEST_CASE ("battleship4", "[4]") {
    REQUIRE (fire({
        {'.', '.'},
        {'*', '*'}
    },"A2") == "splash");
}

TEST_CASE ("battleship5", "[5]") {
    REQUIRE (fire({
        {'*', '.', '.'},
        {'.', '.', '.'},
        {'.', '*', '*'},
    },"C3") == "BOOM");
}

TEST_CASE ("battleship6", "[6]") {
    REQUIRE (fire({
        {'*', '.', '.'},
        {'.', '.', '.'},
        {'.', '*', '*'},
    },"A3") == "splash");
}

TEST_CASE ("battleship7", "[7]") {
    REQUIRE (fire({
        {'.', '.', '.', '.'},
        {'.', '*', '*', '.'},
        {'.', '.', '.', '.'},
        {'.', '.', '.', '.'},
    },"B3") == "BOOM");
}

TEST_CASE ("battleship8", "[8]") {
    REQUIRE (fire({
        {'.', '.', '.', '.'},
        {'.', '*', '*', '.'},
        {'.', '.', '.', '.'},
        {'.', '.', '.', '.'},
    },"B4") == "splash");
}

TEST_CASE ("battleship9", "[9]") {
    REQUIRE (fire({
        {'*'}
    },"A1") == "BOOM");
}


int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
