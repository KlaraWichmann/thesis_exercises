#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "tasks.hpp"
#include <string.h>

TEST_CASE ("doubledpay1", "[1]") {
    REQUIRE (doubledPay(1) == 1);
}

TEST_CASE ("doubledpay2", "[2]") {
    REQUIRE (doubledPay(2) == 3);
}
    
TEST_CASE ("doubledpay3", "[3]") {
    REQUIRE (doubledPay(3) == 7);
}

TEST_CASE ("doubledpay4", "[4]") {
    REQUIRE (doubledPay(4) == 15);
}

TEST_CASE ("doubledpay5", "[5]") {
    REQUIRE (doubledPay(5) == 31);
}

TEST_CASE ("doubledpay6", "[6]") {
    REQUIRE (doubledPay(6) == 63);
}

TEST_CASE ("doubledpay7", "[7]") {
    REQUIRE (doubledPay(7) == 127);
}

TEST_CASE ("doubledpay8", "[8]") {
    REQUIRE (doubledPay(8) == 255);
}

TEST_CASE ("doubledpay9", "[9]") {
    REQUIRE (doubledPay(9) == 511);
}

TEST_CASE ("doubledpay10", "[10]") {
    REQUIRE (doubledPay(10) == 1023);
}

TEST_CASE ("doubledpay11", "[11]") {
    REQUIRE (doubledPay(11) == 2047);
}

TEST_CASE ("doubledpay12", "[12]") {
    REQUIRE (doubledPay(12) == 4095);
}

TEST_CASE ("doubledpay13", "[13]") {
    REQUIRE (doubledPay(13) == 8191);
}

TEST_CASE ("doubledpay14", "[14]") {
    REQUIRE (doubledPay(14) == 16383);
}

TEST_CASE ("doubledpay15", "[15]") {
    REQUIRE (doubledPay(15) == 32767);
}

TEST_CASE ("doubledpay16", "[16]") {
    REQUIRE (doubledPay(16) == 65535);
}

TEST_CASE ("doubledpay17", "[17]") {
    REQUIRE (doubledPay(17) == 131071);
}

TEST_CASE ("doubledpay18", "[18]") {
    REQUIRE (doubledPay(18) == 262143);
}

TEST_CASE ("doubledpay19", "[19]") {
    REQUIRE (doubledPay(19) == 524287);
}

TEST_CASE ("doubledpay20", "[20]") {
    REQUIRE (doubledPay(20) == 1048575);
}

TEST_CASE ("doubledpay21", "[21]") {
    REQUIRE (doubledPay(21) == 2097151);
}

TEST_CASE ("doubledpay22", "[22]") {
    REQUIRE (doubledPay(22) == 4194303);
}



int main (int argc, char* argv[]) {
  return Catch::Session().run(argc, argv);
}
