#include <VolumeImpl.h>
#include <TestVolume.h>
#include <vector>
#include <memory>
#include <iostream>

int main()
{
    std::vector<char> data = {'t', 'e', 's', 't'};
    std::cout << "VolumeImpl" << std::endl;
    std::shared_ptr<Volume> volume = std::make_shared<VolumeImpl>();
    volume->write(0, 1, data);
    volume->read(0, 1, data);

    std::cout << "TestVolume" << std::endl;
    volume = std::make_shared<TestVolume>();
    volume->write(0, 1, data);
    volume->read(0, 1, data);

    return 0;
}
