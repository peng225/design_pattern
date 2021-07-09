#ifndef VERIFIED_SORTER
#define VERIFIED_SORTER

#include "Sorter.h"

class VerifiedSorter : public Sorter {
public:
    VerifiedSorter(std::shared_ptr<Sorter> sorter) {
        this->sorter = sorter;
    }
    void sort(std::vector<int>::iterator beginItr, std::vector<int>::iterator endItr);
private:
    std::shared_ptr<Sorter> sorter;
    void verify(std::vector<int>::iterator beginItr, std::vector<int>::iterator endItr);
};

#endif

