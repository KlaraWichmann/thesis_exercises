#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"

TEST_CASE ("whitespace1", "[1]") {
    REQUIRE (insertWhitespace("SheWalksToTheBeach") == "She Walks To The Beach");
}

TEST_CASE ("whitespace2", "[2]") {
    REQUIRE (insertWhitespace("MarvinTalksTooMuch") == "Marvin Talks Too Much");
}

TEST_CASE ("whitespace3", "[3]") {
    REQUIRE (insertWhitespace("HopelesslyDevotedToYou") == "Hopelessly Devoted To You");
}

TEST_CASE ("whitespace4", "[4]") {
    REQUIRE (insertWhitespace("EvenTheBestFallDownSometimes") == "Even The Best Fall Down Sometimes");
}

TEST_CASE ("whitespace5", "[5]") {
    REQUIRE (insertWhitespace("TheGreatestUpsetInHistory") == "The Greatest Upset In History");
}



int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
