#include <TimedSorter.h>
#include <iostream>

void TimedSorter::sort(std::vector<int>::iterator beginItr, std::vector<int>::iterator endItr)
{
    std::cout << "start timer" << std::endl;
    sorter->sort(beginItr, endItr);
    std::cout << "end timer" << std::endl;
}
