#pragma once

#include "iLogger.h"


struct FileLogger : ILogger {

    void Log(const std::vector<std::string>& cmds, std::time_t ts) override;
};