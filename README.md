# Sort Folder

Sort files in a folder by extension.

## Overview

This project provides a utility to sort files within a directory based on their file extensions. It is built using C++ and utilizes CMake for building and managing the project.

## Getting Started

### Prerequisites

- CMake version 3.12 or higher
- A C++17 compatible compiler (e.g., GCC, Clang)

### Building the Project

1. Clone the repository to your local machine.
2. Navigate to the root directory of the project.
3. Create a build directory and navigate into it:

   ```sh
   mkdir build && cd build
   
4. Run CMake to configure the project and generate a Makefile:
   ```cmake
   cmake ..

5. Build the project:
   ```cmake
   make

The executable will be located in the build/build-out directory.
<br/>
To sort files in a directory, run the sort_f executable followed by the path to the directory you wish to sort:
  ```sh
  ./build-out/sort_f -fp /path/to/directory
  ```

## Project Structure

- `CMakeLists.txt`: Contains the CMake configuration for building the project.
- `include/`: Contains the header files for the project.
- `src/`: Contains the source files for the project.
- `build/`: Contains build-related files and is the default directory for out-of-source builds.

<!--
## Contributing

Please read [CONTRIBUTING.md](https://example.com/CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.
-->
## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
