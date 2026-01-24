#pragma once

#include "iLogger.h"

struct ConsoleLogger : ILogger {
    void Log(const std::vector<std::string>& cmds, std::time_t) override;
};