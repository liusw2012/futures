# Sorting Algorithms in C++

This project provides C++ implementations of several classic sorting algorithms. It includes a demonstration program to see the algorithms in action and a suite of unit tests to verify their correctness. The project is built using CMake.

## Implemented Algorithms

The following sorting algorithms are implemented:
- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort

## File Structure Overview

- `sorting_algorithms.h`: Header file containing the declarations for all sorting functions and utility functions like `printVector`.
- `sorting_algorithms.cpp`: Source file containing the implementations (definitions) of the sorting algorithms and related helper functions.
- `hello.cpp`: The main demonstration program. It initializes sample vectors, sorts them using the available algorithms, and prints the results to the console.
- `test_sorting.cpp`: Contains unit tests for each sorting algorithm, covering various scenarios (empty, sorted, reversed, duplicates, etc.).
- `CMakeLists.txt`: The CMake build configuration file used to compile the sorting library, the demonstration program, and the test executable.
- `README.md`: This file.

## Build Instructions

To build the project, you need CMake and a C++ compiler that supports C++11.

1.  **Create a build directory**:
    It's good practice to build the project out-of-source.
    ```bash
    mkdir build
    ```

2.  **Navigate into the build directory**:
    ```bash
    cd build
    ```

3.  **Run CMake to configure the project**:
    This will generate the build files for your chosen build system (e.g., Makefiles on Linux/macOS, Visual Studio solution on Windows).
    ```bash
    cmake ..
    ```

4.  **Compile the project**:
    Use the build command for your chosen build system. For Makefiles (common on Linux/macOS):
    ```bash
    make
    ```
    For other systems like Visual Studio, you would open the generated solution file and build from there.

This will compile:
- `libsorting_lib.a` (or similar): A static library containing the sorting algorithms.
- `helloworld`: The demonstration executable.
- `run_tests`: The unit test executable.

## Running the Demonstration Program

The `helloworld` executable demonstrates the sorting algorithms on sample arrays.

1.  Navigate to the build directory (if not already there):
    ```bash
    cd build
    ```
2.  Run the executable:
    ```bash
    ./helloworld
    ```
Output will show original and sorted arrays for various algorithms.

## Running Unit Tests

The project includes a test suite to verify the correctness of the sorting algorithms.

There are two ways to run the tests:

1.  **Directly execute `run_tests`**:
    This will run all compiled tests and print pass/fail status for each test suite. Assertions will cause the program to terminate on failure.
    ```bash
    cd build  # If not already there
    ./run_tests
    ```
    A successful run will typically print messages indicating that all tests passed and then a final "All sorting tests completed successfully!" message.

2.  **Using CTest**:
    CTest is CMake's testing tool. It provides more structured test execution and reporting.
    ```bash
    cd build  # If not already there
    ctest
    ```
    Or, if using Makefiles, you can often use:
    ```bash
    make test
    ```
    CTest will show a summary of tests passed or failed.

## Contributing
Contributions are welcome! Please feel free to fork the repository, make improvements, and submit a pull request. If you find any issues or have suggestions, please open an issue.
