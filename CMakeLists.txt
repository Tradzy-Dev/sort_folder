cmake_minimum_required(VERSION 3.12)
project(sort_folder)

set(CMAKE_CXX_STANDARD 17)

set(BUILDFOLDER "build-out")
set(EXECUTABLE "sort_f")
set(SRC_DIR "src")
set(INCLUDE_DIR "include")

set(GPP "g++")
set(OPTIONS "-Wall" "-static" "-I${INCLUDE_DIR}")
set(LIBS "")

file(GLOB SOURCES "${SRC_DIR}/*.cpp")

add_executable(${EXECUTABLE} ${SOURCES})

target_compile_options(${EXECUTABLE} PRIVATE ${OPTIONS})
target_link_libraries(${EXECUTABLE} PRIVATE ${LIBS})

set_target_properties(${EXECUTABLE} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${BUILDFOLDER}
)