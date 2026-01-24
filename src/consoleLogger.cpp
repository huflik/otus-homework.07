#include "consoleLogger.h"
#include <iostream>

void ConsoleLogger::Log(const std::vector<std::string>& cmds, std::time_t) {

    std::cout << "bulk: ";

    for (size_t i = 0; i < cmds.size(); ++i) {
        if (i != 0) {
            std::cout << ", ";
        }
        std::cout << cmds[i];
    }

    std::cout << std::endl;
}