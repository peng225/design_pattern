#pragma once
#include <string>

class TextFile
{
public:
    virtual int open(const std::string &filename) = 0;
    virtual void read(int loc, int len, std::string &data) = 0;
    virtual void close(const std::string &filename) = 0;
};

