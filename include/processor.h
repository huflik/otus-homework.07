#pragma once

#include "iLogger.h"
#include <vector>
#include <memory>

class Processor {
public:

    void Subscribe(std::shared_ptr<ILogger> logger);
    void Add(const std::string& cmd);
    void Finish();
    bool IsEmpty() const;

private:
    Bulk current_;
    std::vector<std::shared_ptr<ILogger>> loggers_;
};