#include "Processor.h"

void Processor::process(const std::function<void(void)>& operation) {
    operation();
}


