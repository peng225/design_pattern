#include <CachedKeyValue.h>
#include <DriveKeyValue.h>
#include <iostream>

CachedKeyValue::CachedKeyValue()
{
    keyValue_ = std::make_shared<DriveKeyValue>("data.txt");
}

int CachedKeyValue::getValue(int key)
{
    if(cached(key)) {
        std::cout << "Read data from cache." << std::endl;
        return cache[key];
    }

    return keyValue_->getValue(key);
}

void CachedKeyValue::setValue(int key, int value)
{
    cache.emplace(std::make_pair(key, value));
    keyValue_->setValue(key, value);
}


bool CachedKeyValue::cached(int key)
{
    return cache.find(key) != std::end(cache);
}
