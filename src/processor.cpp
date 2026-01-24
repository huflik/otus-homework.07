#include "processor.h"
#include <ctime>

void Processor::Subscribe(std::shared_ptr<ILogger> logger) {
    loggers_.push_back(logger);
}

void Processor::Add(const std::string& cmd) {

    if (commands_.empty()) {
        timestamp_ = std::time(nullptr);
    }

    commands_.push_back(cmd);
}

void Processor::Finish() {

    if (commands_.empty()) {
        return;
    }

    for (auto& logger : loggers_) {
        logger->Log(commands_, timestamp_);
    }

    commands_.clear();
}

bool Processor::IsEmpty() const {
    return commands_.empty();
}