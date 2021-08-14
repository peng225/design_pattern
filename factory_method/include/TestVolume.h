#ifndef TEST_VOLUME
#define TEST_VOLUME

#include <Volume.h>

class TestVolume : public Volume
{
protected:
    std::shared_ptr<Logger> createLogger() const override;
};

#endif

