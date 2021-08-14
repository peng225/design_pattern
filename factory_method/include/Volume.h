#ifndef VOLUME
#define VOLUME

#include <Logger.h>
#include <vector>
#include <memory>

class Volume
{
public:
    int read(int lba, int tl, std::vector<char>& data) const;
    int write(int lba, int tl, const std::vector<char>& data);
protected:
    virtual std::shared_ptr<Logger> createLogger() const = 0;
};

#endif

