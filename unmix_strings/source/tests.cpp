#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"

TEST_CASE ("unmix1", "[1]") {
    REQUIRE (unmix("123456") == "214365");
}

TEST_CASE ("unmix2", "[2]") {
    REQUIRE (unmix("hTsii  s aimex dpus rtni.g") == "This is a mixed up string.");
}

TEST_CASE ("unmix3", "[3]") {
    REQUIRE (unmix("badce") == "abcde");
}

TEST_CASE ("unmix4", "[4]") {
    REQUIRE (unmix(" Imaf eeilgna l tilt eidzz!y") == "I am feeling a little dizzy!");
}

TEST_CASE ("unmix5", "[5]") {
    REQUIRE (unmix("21435") == "12345");
}



int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
