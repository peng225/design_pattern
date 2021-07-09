#include <Sorter.h>
#include <BasicSorter.h>
#include <TimedSorter.h>
#include <VerifiedSorter.h>
#include <iostream>
#include <memory>


int main(int argc, char** argv)
{
    std::shared_ptr<Sorter> sorter = std::make_shared<BasicSorter>();
    std::shared_ptr<Sorter> timedSorter = std::make_shared<TimedSorter>(sorter);
    std::shared_ptr<Sorter> verifiedSorter = std::make_shared<VerifiedSorter>(timedSorter);

    std::vector<int> data = { 3, 5, 4, 10, 2};
    std::cout << "sort 1" << std::endl;
    sorter->sort(std::begin(data), std::end(data));
    std::cout << "sort 2" << std::endl;
    timedSorter->sort(std::begin(data), std::end(data));
    std::cout << "sort 3" << std::endl;
    verifiedSorter->sort(std::begin(data), std::end(data));

    return 0;
}

