#ifndef TIMED_SORTER
#define TIMED_SORTER

#include "Sorter.h"

class TimedSorter : public Sorter {
public:
    TimedSorter(std::shared_ptr<Sorter> sorter) {
        this->sorter = sorter;
    }
    void sort(std::vector<int>::iterator beginItr, std::vector<int>::iterator endItr);
private:
    std::shared_ptr<Sorter> sorter;
};

#endif

