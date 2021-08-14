#include <DriveKeyValue.h>
#include <filesystem>
#include <iostream>

DriveKeyValue::DriveKeyValue(const std::string& fileName) : fileName_(fileName)
{
}

int DriveKeyValue::getValue(int key)
{
    if(!std::filesystem::exists(fileName_)) {
        // Create empty file
        std::ofstream ofs(fileName_);
    }
    std::cout << "Read data from drive." << std::endl;
    return 0;
}

void DriveKeyValue::setValue(int key, int value)
{
    std::ofstream ofs(fileName_);
    std::cout << "Write data to drive." << std::endl;
}

