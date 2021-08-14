#include <CachedKeyValue.h>
#include <iostream>
#include <memory>


int main(int argc, char** argv)
{
    std::shared_ptr<CachedKeyValue> ckv = std::make_shared<CachedKeyValue>();
    ckv->setValue(0, 100);
    ckv->getValue(0);
    ckv->getValue(1);
}

