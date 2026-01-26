#include "processor.h"
#include <ctime>

void Processor::Subscribe(std::shared_ptr<ILogger> logger) {
    loggers_.push_back(logger);
}

void Processor::Add(const std::string& cmd) {

    if (current_.commands.empty()) {
        current_.tiestamp = std::time(nullptr);
    }

    current_.commands.push_back(cmd);
}

void Processor::Finish() {

    if (current_.commands.empty()) {
        return;
    }

    for (auto& logger : loggers_) {
        logger->Log(current_);
    }

    current_.commands.clear();
}

bool Processor::IsEmpty() const {
    return current_.commands.empty();
}