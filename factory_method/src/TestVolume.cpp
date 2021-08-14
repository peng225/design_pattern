#include <TestVolume.h>
#include <ConsoleLogger.h>

std::shared_ptr<Logger> TestVolume::createLogger() const
{
    return std::make_shared<ConsoleLogger>();
}

