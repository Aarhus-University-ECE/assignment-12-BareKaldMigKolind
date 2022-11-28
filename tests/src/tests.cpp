#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do
                           // this in one cpp file
#include "catch.hpp"

extern "C" {
#include "duration.h"
}

// See Catch2's documentation:
// https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

// Add your test cases. Dont forget to include header file.
// Testcase til opgave a), b) og c)
TEST_CASE("Duration - Opgave a, b og c") {
    Duration d0;
    REQUIRE(d0.getDuration() == 0);
    Duration d1(4);
    REQUIRE(d1.getDuration() == 4);
    Duration d2(8);
    REQUIRE(d2.getDuration() == 8);
}

TEST_CASE("Duration tick - Opgave e og f") {
    Duration d0;
    d0.tick();
    REQUIRE(d0.getDuration() == 1);
    d0.tick(2);
    REQUIRE(d0.getDuration() == 3);
}

TEST_CASE("Duration Alarm - Opgave g") {
    Duration d0;
    d0.setAlarm(5);
    REQUIRE(d0.tick() == false);
    REQUIRE(d0.tick(6) == true);
}

TEST_CASE("Duration alarm no past - Opgave h") {
    Duration d0;
    d0.tick(2);
    d0.setAlarm(1);
    REQUIRE(d0.tick(2) == false);
    d0.setAlarm(6);
    REQUIRE(d0.tick(4) == true);
}

TEST_CASE("Duration alarm new function - Opgave i") {}