// coding: utf-8

// #ifndef UTILS_CONST_HPP
// #include "utils_const.h"
// #endif

#define CATCH_CONFIG_MAIN
// #include "libs/catch_amalgamated.hpp"
// #include <catch2/catch_test_macros.hpp>
// #include "catch.hpp"
#include <cassert>
#include "point.hpp"

#include <iostream>

void test_point() {
    Point p;

    assert(p.getX() == 0);
    assert(p.getY() == 0);
}
/*
TEST_CASE("Creating and Setting Values to a Point", "[point]") {
    Point p;
    p.setX(2);
    p.setY(3);

    REQUIRE(p.getX() == 2);
    REQUIRE(p.getY() == 3);
}
*/

int main() {
    test_point();
    std::cout << "Hello" << std::endl;
    return 0;
}
