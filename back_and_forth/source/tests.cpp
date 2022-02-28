#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"
#include <string.h>

TEST_CASE ("arrows1", "[1]") {
    REQUIRE (calculateArrowhead({">>>>", "<", "<", "<"}) == ">");
}

TEST_CASE ("arrows2", "[2]") {
    REQUIRE (calculateArrowhead({">", "<", ">>", "<", "<<<"}) == "<<");
}
    
TEST_CASE ("arrows3", "[3]") {
    REQUIRE (calculateArrowhead({">>>", "<<<"}) == "");
}

TEST_CASE ("arrows4", "[4]") {
    REQUIRE (calculateArrowhead({">>", "<<", "<<<"}) == "<<<");
}

TEST_CASE ("arrows5", "[5]") {
    REQUIRE (calculateArrowhead({">", ">>>>>", ">>>>", ">>>>>>>", ">>>>>>>>", ">>>>", ">>>>>>>>"}) == ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
}

TEST_CASE ("arrows6", "[6]") {
    REQUIRE (calculateArrowhead({"<", ">>>>>>", "<<<<<<<<", "<<<<<<<<<<", ">>>>>>>", ">>>"}) == "<<<");
}

TEST_CASE ("arrows7", "[7]") {
    REQUIRE (calculateArrowhead({"<<<<", ">>>>>"}) == ">");
}

TEST_CASE ("arrows8", "[8]") {
    REQUIRE (calculateArrowhead({"<<<<<<<<<", "<<<<", ">>>", ">>>>>>>>", ">>>>>>>", "<<<<<"}) == "");
}

TEST_CASE ("arrows9", "[9]") {
    REQUIRE (calculateArrowhead({">>>>>>>>>>", "<<", ">>>>>>>>>>"}) == ">>>>>>>>>>>>>>>>>>");
}

TEST_CASE ("arrows10", "[10]") {
    REQUIRE (calculateArrowhead({">", "<<<", ">>>>>>>>>>", ">>>>>"}) == ">>>>>>>>>>>>>");
}

TEST_CASE ("arrows11", "[11]") {
    REQUIRE (calculateArrowhead({"<<<<<<<<<", ">>>", "<<<<<"}) == "<<<<<<<<<<<");
}

TEST_CASE ("arrows12", "[12]") {
    REQUIRE (calculateArrowhead({">", "<<"}) == "<");
}

TEST_CASE ("arrows13", "[13]") {
    REQUIRE (calculateArrowhead({"<<<", "<<", "<"}) == "<<<<<<");
}

TEST_CASE ("arrows14", "[14]") {
    REQUIRE (calculateArrowhead({"<<", "<<<<<<<", ">>>>>>>>>"}) == "");
}

TEST_CASE ("arrows15", "[15]") {
    REQUIRE (calculateArrowhead({">>>>>", ">>>>>>>>", "<<<<<<", "<<<<", "<<<<<<<"}) == "<<<<");
}

TEST_CASE ("arrows16", "[16]") {
    REQUIRE (calculateArrowhead({">>", "<<<<<<<<<", ">>>>>>", "<<<<<"}) == "<<<<<<");
}

TEST_CASE ("arrows17", "[17]") {
    REQUIRE (calculateArrowhead({">>>>>>>>>>", ">>>", "<"}) == ">>>>>>>>>>>>");
}

TEST_CASE ("arrows18", "[18]") {
    REQUIRE (calculateArrowhead({"<<", ">>>>>>", "<<", ">", ">>>", "<<<"}) == ">>>");
}

TEST_CASE ("arrows19", "[19]") {
    REQUIRE (calculateArrowhead({">", ">>>>>>>>>>", "<", "<<"}) == ">>>>>>>>");
}

TEST_CASE ("arrows20", "[20]") {
    REQUIRE (calculateArrowhead({"<<<<", ">>>>", ">>", "<<<<<<<<<"}) == "<<<<<<<");
}

TEST_CASE ("arrows21", "[21]") {
    REQUIRE (calculateArrowhead({">>>>>>>", ">>", "<<<<<<<<<<", ">>>>", ">>>>>>>>>", "<<", ">>>>>>>>>"}) == ">>>>>>>>>>>>>>>>>>>");
}

TEST_CASE ("arrows22", "[22]") {
    REQUIRE (calculateArrowhead({"<<<<<<<<<", ">>>>>>", ">>", "<<<<<<<"}) == "<<<<<<<<");
}

TEST_CASE ("arrows23", "[23]") {
    REQUIRE (calculateArrowhead({">>>", "<<<", ">>>>>>>>>>", ">>", ">>>", "<<", "<<<<<<"}) == ">>>>>>>");
}

TEST_CASE ("arrows24", "[24]") {
    REQUIRE (calculateArrowhead({">>>>>>>>>", ">>>>>>>>>", "<<<<<", ">>>>>>>>", ">>>>>>>"}) == ">>>>>>>>>>>>>>>>>>>>>>>>>>>>");
}



int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
