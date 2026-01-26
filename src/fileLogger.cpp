#include "fileLogger.h"
#include <fstream>

void FileLogger::Log(const Bulk& bulk) {

    std::ofstream out("bulk" + std::to_string(bulk.tiestamp) + ".log");

    for (size_t i = 0; i < bulk.commands.size(); ++i) {
        if (i != 0) {
            out << ", ";
        }
        out << bulk.commands[i];
    }
}