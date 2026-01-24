#include "fileLogger.h"
#include <fstream>

void FileLogger::Log(const std::vector<std::string>& cmds, std::time_t ts) {

    std::ofstream out("bulk" + std::to_string(ts) + ".log");

    for (size_t i = 0; i < cmds.size(); ++i) {
        if (i != 0) {
            out << ", ";
        }
        out << cmds[i];
    }
}