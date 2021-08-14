#ifndef FILE_LOGGER
#define FILE_LOGGER

#include <Logger.h>

class FileLogger : public Logger
{
public:
    FileLogger();
    void print(const std::string& log);
private:
    std::string fileName;
};

#endif

