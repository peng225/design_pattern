#ifndef CACHED_KEYVALUE
#define CACHED_KEYVALUE

#include <KeyValue.h>
#include <memory>
#include <unordered_map>

class CachedKeyValue : public KeyValue {
public:
    CachedKeyValue();
    int getValue(int key) override;
    void setValue(int key, int value) override;
private:
    std::shared_ptr<KeyValue> keyValue_;
    std::unordered_map<int, int> cache;
    bool cached(int key);
};

#endif

