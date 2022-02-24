#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"
#include <string.h>

TEST_CASE ("rockpaperscissors1", "[1]") {
    REQUIRE (rps("rock", "paper") == "Player 2 wins");
}
    
TEST_CASE ("rockpaperscissors2", "[2]") {
    REQUIRE (rps("paper", "rock") == "Player 1 wins");
}

TEST_CASE ("rockpaperscissors3", "[3]") {
    REQUIRE (rps("paper", "scissors") == "Player 2 wins");
}

TEST_CASE ("rockpaperscissors4", "[4]") {
    REQUIRE (rps("scissors", "scissors") == "TIE");
}

TEST_CASE ("rockpaperscissors5", "[5]") {
    REQUIRE (rps("paper", "paper") == "TIE");
}

TEST_CASE ("rockpaperscissors6", "[6]") {
    REQUIRE (rps("rock", "rock") == "TIE");
}

TEST_CASE ("rockpaperscissors7", "[7]") {
    REQUIRE (rps("scissors", "paper") == "Player 1 wins");
}

int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
