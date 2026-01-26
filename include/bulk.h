#pragma once

#include <vector>
#include <string>
#include <ctime>

struct Bulk {
    std::vector<std::string> commands;
    std::time_t tiestamp{};
};