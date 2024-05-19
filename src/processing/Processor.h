#ifndef CPP_PROJECT_PROCESSOR_H
#define CPP_PROJECT_PROCESSOR_H

#include "iostream"

class Processor {
public:
    static void process(const std::function<void(void)>& operation);
};

#endif //CPP_PROJECT_PROCESSOR_H
