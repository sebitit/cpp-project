#include <cmath>
#include "doctest/doctest.h"
#include "../../src/processing/Processor.h"

double computeSquare(double base) {
    double result;

    std::function<void(void)> operation = [&result, &base]() { result = std::pow(base, 2); };
    Processor::process(operation);

    return result;
}

TEST_CASE("Compute to the power of two") {
    CHECK(computeSquare(2) == 4);
    CHECK(computeSquare(3) == 9);
    CHECK(computeSquare(4) == 16);
}
