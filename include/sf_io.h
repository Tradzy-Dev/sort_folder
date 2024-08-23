#ifndef SF_IO_H
#define SF_IO_H

#include <string>
#include <iostream>
#include <filesystem>

using namespace std;

namespace io_process {
    bool move_file(string source, string destination);
}

#endif // SF_IO_H