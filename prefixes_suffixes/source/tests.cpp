#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"

TEST_CASE ("prefix1", "[1]") {
    REQUIRE (isPrefix("automation", "auto-") == true);
}

TEST_CASE ("prefix2", "[2]") {
    REQUIRE (isPrefix("superfluous", "super-") == true);
}

TEST_CASE ("prefix3", "[3]") {
    REQUIRE (isPrefix("oration", "mega-") == false);
}

TEST_CASE ("prefix4", "[4]") {
    REQUIRE (isPrefix("retrospect", "sub-") == false);
}

TEST_CASE ("suffix1", "[5]") {
    REQUIRE (isSuffix("arachnophobia", "-phobia") == true);
}

TEST_CASE ("suffix2", "[6]") {
    REQUIRE (isSuffix("rhinoplasty", "-plasty") == true);
}

TEST_CASE ("suffix3", "[7]") {
    REQUIRE (isSuffix("movement", "-scope") == false);
}

TEST_CASE ("suffix4", "[8]") {
    REQUIRE (isSuffix("vocation", "-logy") == false);
}



int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
