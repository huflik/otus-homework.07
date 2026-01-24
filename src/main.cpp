#include "parser.h"
#include "consoleLogger.h"
#include "fileLogger.h"

#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {

    if (argc != 2)
        return 1;

    size_t n = std::stoul(argv[1]);

    Processor processor;

    processor.Subscribe(std::make_shared<ConsoleLogger>());
    processor.Subscribe(std::make_shared<FileLogger>());

    Parser parser(n, processor);

    std::string line;
    while (std::getline(std::cin, line)) {
        parser.Process(line);
    }

    parser.Eof();

    return 0;
}