#include "../include/sf_main.h"

int main(int argc, char** argv) {
    if (!global_process::load_arguments(argc, argv)) {
        return EXIT_FAILURE;
    }

    string extension, dest_path;

    for (const auto& entry : filesystem::directory_iterator(global_variables::arguments.folder_path)) {
        if (entry.is_regular_file()) {
            extension = entry.path().extension();
            extension = extension.substr(1, extension.length());
            if (!filesystem::exists(global_variables::arguments.folder_path + "/" + extension)) {
                cout << "Creating directory: " << extension << endl;
                filesystem::create_directory(global_variables::arguments.folder_path + "/" + extension);
            }

            dest_path = global_variables::arguments.folder_path + "/" + extension + "/" + entry.path().filename().string();
            
            for (int i = 0; filesystem::exists(dest_path); i++) {
                dest_path = global_variables::arguments.folder_path + "/" + extension + "/" + entry.path().stem().string() + "_" + to_string(i) + "." + extension;
            }

            if (!io_process::move_file(entry.path(), dest_path)) {
                cout << "Error moving file: " << entry.path().filename() << endl;
                return EXIT_FAILURE;
            }

            cout << "Moved file: " << entry.path().filename() << " to " << dest_path << endl;
        }
    }

    cout << "Finished processing files" << endl;

    return EXIT_SUCCESS;
}