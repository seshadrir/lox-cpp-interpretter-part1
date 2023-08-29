#include "../include/catch2/catch.hpp"
#include "../src/fact.h"

TEST_CASE("Factorials are computed", "[fact]")
{
    REQUIRE(fact(0) == 1);
    REQUIRE(fact(1) == 1);
    REQUIRE(fact(2) == 2);
    REQUIRE(fact(3) == 6);
    REQUIRE(fact(10) == 3628800);
}
