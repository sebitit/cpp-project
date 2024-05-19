#ifndef CPP_PROJECT_FIBONACCICALCULATOR_H
#define CPP_PROJECT_FIBONACCICALCULATOR_H

class FibonacciCalculator {
public:
    void calculateSequenceFor(int finalOrder);
    [[nodiscard]] int getLastNumber() const;

private:
    int order = 0;
    int last = 0;
    int secondLast = 0;
};

#endif //CPP_PROJECT_FIBONACCICALCULATOR_H
