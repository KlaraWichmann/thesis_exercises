#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"

TEST_CASE ("pingpong1", "[1]") {
    REQUIRE (pingPong({"Ping!", "Ping!", "Ping!"}, true) == (std::vector<std::string>{"Ping!", "Pong!", "Ping!", "Pong!", "Ping!", "Pong!"}));
}

TEST_CASE ("pingpong2", "[2]") {
    REQUIRE (pingPong({"Ping!", "Ping!"}, false) == (std::vector<std::string>{"Ping!", "Pong!", "Ping!"}));
}

TEST_CASE ("pingpong3", "[3]") {
    REQUIRE (pingPong({"Ping!"}, true) == (std::vector<std::string>{"Ping!", "Pong!"}));
}

TEST_CASE ("pingpong4", "[4]") {
    REQUIRE (pingPong({"Ping!"}, false) == (std::vector<std::string>{"Ping!"}));
}

TEST_CASE ("pingpong5", "[5]") {
    REQUIRE (pingPong({"Ping!", "Ping!", "Ping!"}, false) == (std::vector<std::string>{"Ping!", "Pong!", "Ping!", "Pong!", "Ping!"}));
}



int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
