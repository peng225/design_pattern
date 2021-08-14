#ifndef DRIVE_KEYVALUE
#define DRIVE_KEYVALUE

#include <KeyValue.h>
#include <fstream>
#include <string>

class DriveKeyValue : public KeyValue {
public:
    DriveKeyValue(const std::string& fileName);
    int getValue(int key) override;
    void setValue(int key, int value) override;
private:
    std::string fileName_;
};

#endif

