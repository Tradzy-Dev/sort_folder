#include "../include/sf_global.h"

global_struct::arguments global_variables::arguments;

bool global_process::load_arguments(int argc, char** argv) {
    if (argc > 1) {
        
        for (int i = 1; i < argc; i++) {
            string arg = argv[i];
            if (arg == "-h" || arg == "--help") {
                cout << "Usage: " << argv[0] << " -fp <folder_path>" << endl;
                cout << "Arguments:" << endl;
                cout << "  -h, --help: Show help menu" << endl;
                cout << "  -fp, --folder_path: Path to the folder containing the files to be processed" << endl;
                cout << endl;
                return false;
            } else if (arg == "-fp" || arg == "--folder_path") {
                global_variables::arguments.folder_path = argv[++i];
            } else {
                cout << "Unsupported argument: " << arg << ". Use --help to see help menu" << endl;
            }
        }

        return true;

        cout << "GV arguments: " << global_variables::arguments.folder_path << endl;
    } else 
        cout << "No arguments provided. Use --help to see help menu" << endl;

    return false;
}