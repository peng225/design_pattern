#ifndef VOLUME_IMPL
#define VOLUME_IMPL

#include <Volume.h>

class VolumeImpl : public Volume
{
protected:
    std::shared_ptr<Logger>createLogger() const override;
};

#endif

