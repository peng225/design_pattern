#include <Volume.h>

int Volume::read(int lba, int tl, std::vector<char>& data) const
{
    auto logger = createLogger();
    logger->print("read() is called.");
    return 0;
}

int Volume::write(int lba, int tl, const std::vector<char>& data)
{
    auto logger = createLogger();
    logger->print("write() is called.");
    return 0;
}

