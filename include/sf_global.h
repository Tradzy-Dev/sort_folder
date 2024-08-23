#ifndef SF_GLOBAL_H
#define SF_GLOBAL_H

#include <string>
#include <iostream>

using namespace std;

namespace global_struct {
    struct arguments {
        string folder_path;

        void clear() {
            folder_path.clear();
        }
    };
}

namespace global_process {
    bool load_arguments(int argc, char** argv);
}

namespace global_variables {
    extern global_struct::arguments arguments;
}

#endif // SF_GLOBAL_H