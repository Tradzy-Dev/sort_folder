#include "../include/sf_main.h"

int main(int argc, char** argv) {
    if (!global_process::load_arguments(argc, argv)) {
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}