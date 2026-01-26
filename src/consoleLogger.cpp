#include "consoleLogger.h"
#include <iostream>

void ConsoleLogger::Log(const Bulk& bulk) {

    std::cout << "bulk: ";

    for (size_t i = 0; i < bulk.commands.size(); ++i) {
        if (i != 0) {
            std::cout << ", ";
        }
        std::cout << bulk.commands[i];
    }

    std::cout << '\n' << std::flush;
}