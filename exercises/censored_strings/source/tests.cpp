#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"
#include <string.h>

TEST_CASE ("vowels1", "[1]") {
    REQUIRE (uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo") == "Where did my vowels go?");
}

TEST_CASE ("vowels2", "[2]") {
    REQUIRE (uncensor("abcd", "") == "abcd");
}

TEST_CASE ("vowels3", "[3]") {
    REQUIRE (uncensor("*PP*RC*S*", "UEAE") == "UPPERCASE");
}

TEST_CASE ("vowels4", "[4]") {
    REQUIRE (uncensor("Ch**s*, Gr*mm*t -- ch**s*", "eeeoieee") == "Cheese, Grommit -- cheese");
}

TEST_CASE ("vowels5", "[5]") {
    REQUIRE (uncensor("*l*ph*nt", "Eea") == "Elephant");
}

TEST_CASE ("vowels6", "[6]") {
    REQUIRE (uncensor("", "Eea") == "");
}

TEST_CASE ("vowels7", "[7]") {
    REQUIRE (uncensor("*", "H") == "H");
}

int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
