#include <FileLogger.h>
#include <fstream>

FileLogger::FileLogger() : fileName("log.txt")
{
}

void FileLogger::print(const std::string& log)
{
    std::ofstream ofs(fileName, std::ios_base::app);
    ofs << log << std::endl;
    ofs.close();
}

