#include <TextFileAdapter.h>
#include <cerrno>

int TextFileAdapter::open(const std::string &filename)
{
    ifs.open(filename);
    if(!ifs) {
        return errno;
    }
    return 0;
}

void TextFileAdapter::read(int loc, int len, std::string &data)
{
    ifs.seekg(loc, std::ios_base::beg);
    data.resize(len);
    ifs.read(&data.front(), len);
}

void TextFileAdapter::close(const std::string &filename)
{
    ifs.close();
}

