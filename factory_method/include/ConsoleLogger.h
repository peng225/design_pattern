#ifndef CONSOLE_LOGGER
#define CONSOLE_LOGGER

#include <Logger.h>

class ConsoleLogger : public Logger
{
public:
    void print(const std::string& log);
};

#endif

