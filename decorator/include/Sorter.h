#ifndef SORTER
#define SORTER

#include <algorithm>
#include <vector>
#include <memory>

class Sorter {
public:
    virtual void sort(std::vector<int>::iterator beginItr, std::vector<int>::iterator endItr) = 0;
};

#endif

