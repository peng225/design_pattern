#include <VerifiedSorter.h>
#include <iostream>

void VerifiedSorter::sort(std::vector<int>::iterator beginItr, std::vector<int>::iterator endItr)
{
    sorter->sort(beginItr, endItr);
    verify(beginItr, endItr);
}

void VerifiedSorter::verify(std::vector<int>::iterator beginItr, std::vector<int>::iterator endItr)
{
    std::cout << "start verification!" << std::endl;
    for(auto itr = std::next(beginItr, 1); itr != endItr; itr++) {
        if(*prev(itr, 1) > *itr) {
            std::cout << "Verification failure! " <<
                *prev(itr, 1) << ", " << *itr << std::endl;
        }
    }
    std::cout << "verification finished!" << std::endl;
}

