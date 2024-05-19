#include "iostream"
#include "UserInput.h"
#include "../calculation/FibonacciCalculator.h"

void UserInput::printFibonacciNumber() {
    UserInput userInput;

    UserInput::getFibonacciOrder();
    userInput.setInput();
    userInput.printInputSpecificFibonacciNumber();
}

void UserInput::getFibonacciOrder() {
    std::cout << "Enter fibonacci order: " << std::endl;
}

void UserInput::setInput() {
    std::cin >> input;

    if (std::cin.fail()) {
        std::cerr << "Invalid input, please enter an integer." << std::endl;
    }
}

void UserInput::printInputSpecificFibonacciNumber() const {
    FibonacciCalculator fibonacciCalculator;
    fibonacciCalculator.calculateSequenceFor(input);

    std::cout << "Calculated fibonacci number: " << std::endl << fibonacciCalculator.getLastNumber() << std::endl;
}