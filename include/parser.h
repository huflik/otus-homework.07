#pragma once

#include "processor.h"
#include <string>

class Parser {
public:

    Parser(size_t n, Processor& p);
    void Process(const std::string& line);
    void Eof();

private:
    size_t n_;
    size_t count_{0};
    int depth_{0};
    Processor& processor_;
};