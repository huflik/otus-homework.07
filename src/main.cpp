#include "parser.h"
#include "processor.h"
#include "consoleLogger.h"
#include "fileLogger.h"

#include <iostream>
#include <cstdlib>
#include <memory>

int main(int argc, char* argv[]) {

    if (argc != 2)
        return 1;

    size_t n = std::stoul(argv[1]);

    auto processor = std::make_shared<Processor>();

    processor->Subscribe(std::make_shared<ConsoleLogger>());
    processor->Subscribe(std::make_shared<FileLogger>());

    Parser parser(n, processor);

    std::string line;
    while (std::getline(std::cin, line)) {
        parser.Process(line);
    }

    parser.Eof();

    return 0;
}