#pragma once

#include <vector>
#include <string>
#include <ctime>

struct ILogger {
    virtual ~ILogger() = default;
    virtual void Log(const std::vector<std::string>& cmds, std::time_t ts) = 0;
};