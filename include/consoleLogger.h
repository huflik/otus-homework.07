#pragma once

#include "iLogger.h"

struct ConsoleLogger : ILogger {
    void Log(const Bulk& bulk) override;
};