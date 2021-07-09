#ifndef BASIC_SORTER
#define BASIC_SORTER

#include "Sorter.h"

class BasicSorter : public Sorter {
public:
    void sort(std::vector<int>::iterator beginItr, std::vector<int>::iterator endItr);
};

#endif

