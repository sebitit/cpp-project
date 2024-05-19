#include "doctest/doctest.h"
#include "../../src/calculation/FibonacciCalculator.h"

FibonacciCalculator underTest;

int calculateSequenceAndGetLastNumber(int finalOrder) {
    underTest.calculateSequenceFor(finalOrder);

    return underTest.getLastNumber();
}

TEST_CASE("Calculate fibonacci sequence") {
    CHECK(calculateSequenceAndGetLastNumber(0) == 0);
    CHECK(calculateSequenceAndGetLastNumber(1) == 1);
    CHECK(calculateSequenceAndGetLastNumber(2) == 1);
    CHECK(calculateSequenceAndGetLastNumber(3) == 2);
    CHECK(calculateSequenceAndGetLastNumber(4) == 3);
    CHECK(calculateSequenceAndGetLastNumber(5) == 5);
    CHECK(calculateSequenceAndGetLastNumber(6) == 8);
    CHECK(calculateSequenceAndGetLastNumber(7) == 13);
    CHECK(calculateSequenceAndGetLastNumber(8) == 21);
    CHECK(calculateSequenceAndGetLastNumber(15) == 610);
    CHECK(calculateSequenceAndGetLastNumber(18) == 2584);
}