#ifndef LOGGER
#define LOGGER

#include <string>

class Logger
{
public:
    virtual void print(const std::string& log) = 0;
};

#endif

