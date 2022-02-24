#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"

TEST_CASE ("cars0", "[1]") {
    REQUIRE (cars(37, 15, 20) == 9);
}

TEST_CASE ("cars1", "[2]") {
    REQUIRE (cars(72, 7, 21) == 7);
}

TEST_CASE ("cars2", "[3]") {
    REQUIRE (cars(9, 44, 34) == 2);
}

TEST_CASE ("cars3", "[4]") {
    REQUIRE (cars(50, 38, 7) == 3);
}

TEST_CASE ("cars4", "[5]") {
    REQUIRE (cars(68, 9, 44) == 9);
}

TEST_CASE ("cars5", "[6]") {
    REQUIRE (cars(3, 29, 54) == 0);
}

TEST_CASE ("cars6", "[7]") {
    REQUIRE (cars(28, 34, 80) == 7);
}

TEST_CASE ("cars7", "[8]") {
    REQUIRE (cars(88, 50, 83) == 22);
}

TEST_CASE ("cars8", "[9]") {
    REQUIRE (cars(66, 18, 21) == 10);
}

TEST_CASE ("cars9", "[10]") {
    REQUIRE (cars(97, 6, 10) == 5);
}

TEST_CASE ("cars10", "[11]") {
    REQUIRE (cars(921, 310, 350) == 175);
}

TEST_CASE ("cars11", "[12]") {
    REQUIRE (cars(736, 430, 851) == 184);
}

TEST_CASE ("cars12", "[13]") {
    REQUIRE (cars(405, 379, 740) == 101);
}

TEST_CASE ("cars13", "[14]") {
    REQUIRE (cars(593, 78, 389) == 78);
}

TEST_CASE ("cars14", "[15]") {
    REQUIRE (cars(875, 370, 675) == 218);
}

TEST_CASE ("cars15", "[16]") {
    REQUIRE (cars(863, 274, 203) == 101);
}

TEST_CASE ("cars16", "[17]") {
    REQUIRE (cars(959, 331, 537) == 239);
}

TEST_CASE ("cars17", "[18]") {
    REQUIRE (cars(416, 340, 551) == 104);
}

TEST_CASE ("cars18", "[19]") {
    REQUIRE (cars(692, 348, 543) == 173);
}

TEST_CASE ("cars19", "[20]") {
    REQUIRE (cars(527, 412, 951) == 131);
}

int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
