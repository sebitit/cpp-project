#include "processing/Processor.h"
#include "user/UserInput.h"

int main() {
    Processor::process(UserInput::printFibonacciNumber);

    return 0;
}

