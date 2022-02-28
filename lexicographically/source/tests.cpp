#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"
#include <string.h>

TEST_CASE ("lexicographically1", "[1]") {
    REQUIRE (firstAndLast("marmite") == (std::vector<std::string>({"aeimmrt", "trmmiea"})));
}
    
TEST_CASE ("lexicographically2", "[2]") {
    REQUIRE (firstAndLast("bench") == (std::vector<std::string>({"bcehn", "nhecb"})));
}

TEST_CASE ("lexicographically3", "[3]") {
    REQUIRE (firstAndLast("scoop") == (std::vector<std::string>({"coops", "spooc"})));
}

TEST_CASE ("lexicographically4", "[4]") {
    REQUIRE (firstAndLast("fanatic") == (std::vector<std::string>({"aacfint", "tnifcaa"})));
}


int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
