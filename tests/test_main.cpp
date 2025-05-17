#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "../include/utils.hpp"

TEST_CASE("Addition works", "[math]") {
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, 1) == 0);
}