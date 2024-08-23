#include "../include/sf_io.h"

bool io_process::move_file(string source, string destination) {
    try {
        filesystem::copy(source, destination);
        filesystem::remove(source);
        return true;
    } catch (const filesystem::filesystem_error& e) {
        cout << "Error moving file: " << e.what() << endl;
        return false;
    }

    return false;
}