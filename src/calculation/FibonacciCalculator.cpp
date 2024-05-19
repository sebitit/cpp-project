#include "FibonacciCalculator.h"

void FibonacciCalculator::calculateSequenceFor(int finalOrder) {
    if (finalOrder == 0) return;

    last = 1;
    secondLast = 0;
    order = 1;

    if (finalOrder == 1) return;

    for (int i = 2; i <= finalOrder; i++) {
        int currentLast = last + secondLast;
        secondLast = last;
        last = currentLast;
        order = i;
    }
}

int FibonacciCalculator::getLastNumber() const {
    return last;
}
