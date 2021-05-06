#include <TextFileAdapter.h>
#include <iostream>
#include <memory>


int main(int argc, char** argv)
{
    std::string filename = std::string(argv[1]);

    std::shared_ptr<TextFile> textFile = std::make_shared<TextFileAdapter>();
    if(int retErrno = textFile->open(filename) != 0) {
        std::cerr << "file open failed. errno = " << retErrno << std::endl;
        return 1;
    }

    constexpr int LOC = 3;
    constexpr int LEN = 5;
    std::string data;
    textFile->read(LOC, LEN, data);
    std::cout << "data:" << std::endl;
    std::cout << data << std::endl;

    textFile->close(filename);

    return 0;
}

