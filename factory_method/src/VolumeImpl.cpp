#include <VolumeImpl.h>
#include <FileLogger.h>

std::shared_ptr<Logger> VolumeImpl::createLogger() const
{
    return std::make_shared<FileLogger>();
}

