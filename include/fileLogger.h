#pragma once

#include "iLogger.h"


struct FileLogger : ILogger {

    void Log(const Bulk& bulk) override;
};