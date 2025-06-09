cmake_minimum_required(VERSION 3.1) # Updated for modern CMake practices
project(SortingProject CXX) # Changed project name for clarity, and specified language

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add a library for the sorting algorithms
# sorting_algorithms.h is in the same directory as sorting_algorithms.cpp,
# so CMake should find it automatically for compilation of the library.
# For executables, if sorting_algorithms.h was in an 'include' dir, we'd use target_include_directories.
add_library(sorting_lib STATIC
    sorting_algorithms.cpp
)

# Add the main executable (demo program)
add_executable(helloworld
    hello.cpp
)

# Link the main executable against the sorting library
target_link_libraries(helloworld PRIVATE sorting_lib)

# Enable testing with CTest
enable_testing()

# Add the test executable
add_executable(run_tests
    test_sorting.cpp
)

# Link the test executable against the sorting library
target_link_libraries(run_tests PRIVATE sorting_lib)

# Add the test executable to CTest
# This defines a test named "SortingAlgorithmsTest" that runs the "run_tests" executable.
add_test(NAME SortingAlgorithmsTest COMMAND run_tests)

# Optional: Print a message indicating where the executables will be.
#message(STATUS "Executables will be built in ${CMAKE_BINARY_DIR}")
#message(STATUS "Run 'make' or your chosen generator's build command.")
#message(STATUS "Run tests with 'ctest'.")
#message(STATUS "Run demo with './helloworld'.")
