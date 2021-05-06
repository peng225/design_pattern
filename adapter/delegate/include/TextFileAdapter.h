#pragma once

#include <TextFile.h>
#include <fstream>

class TextFileAdapter : public TextFile
{
public:
    int open(const std::string &filename) override;
    void read(int loc, int len, std::string &data) override;
    void close(const std::string &filename) override;
private:
    std::ifstream ifs;
};

