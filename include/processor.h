#pragma once

#include "iLogger.h"
#include <vector>
#include <memory>
#include <ctime>

class Processor {
public:

    void Subscribe(std::shared_ptr<ILogger> logger);
    void Add(const std::string& cmd);
    void Finish();
    bool IsEmpty() const;

private:
    std::vector<std::string> commands_;
    std::vector<std::shared_ptr<ILogger>> loggers_;
    std::time_t timestamp_{};
};