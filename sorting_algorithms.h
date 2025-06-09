#ifndef SORTING_ALGORITHMS_H
#define SORTING_ALGORITHMS_H

#include <vector>
#include <string> // Required for printVector if it takes a string label, though not strictly in current hello.cpp printVector

// Helper function to print a vector (optional, for testing)
// Declaration
void printVector(const std::vector<int>& arr);
// Note: The original printVector in hello.cpp did not take a label,
// the one in test_sorting.cpp (printTestVector) did.
// For consistency, I'll use the one from hello.cpp as the "library" one.


// Bubble Sort
// Declaration
void bubbleSort(std::vector<int>& arr);

// Selection Sort
// Declaration
void selectionSort(std::vector<int>& arr);

// Insertion Sort
// Declaration
void insertionSort(std::vector<int>& arr);

// Merge Sort
// Declaration
void mergeSort(std::vector<int>& arr);

// Quick Sort
// Declaration
void quickSort(std::vector<int>& arr);

// Heap Sort
// Declaration
void heapSort(std::vector<int>& arr);

#endif // SORTING_ALGORITHMS_H
