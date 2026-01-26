#pragma once

#include "bulk.h"

struct ILogger {
    virtual ~ILogger() = default;
    virtual void Log(const Bulk& bulk) = 0;
};