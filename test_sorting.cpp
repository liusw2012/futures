#include "sorting_algorithms.h" // Include the new header
#include <iostream>
#include <vector>
#include <algorithm> // For std::sort (to create expected results easily), std::is_sorted
#include <cassert>   // For assert()

// --- Test Cases ---
// Sorting function declarations are now in sorting_algorithms.h
// printVector (from sorting_algorithms.h) can be used if generic printing is needed,
// or printTestVector for test-specific formatting.

// Helper to print vectors for debugging (optional)
void printTestVector(const std::vector<int>& arr, const std::string& label) {
    std::cout << label << ": ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << (i == arr.size() - 1 ? "" : ", ");
    }
    std::cout << std::endl;
}

void testBubbleSort() {
    std::cout << "Testing Bubble Sort..." << std::endl;
    std::vector<int> arr, expected;

    // Test case 1: Empty vector
    arr = {};
    expected = {};
    bubbleSort(arr);
    assert(arr == expected);

    // Test case 2: Already sorted vector
    arr = {1, 2, 3, 4, 5};
    expected = {1, 2, 3, 4, 5};
    bubbleSort(arr);
    assert(arr == expected);

    // Test case 3: Reverse-sorted vector
    arr = {5, 4, 3, 2, 1};
    expected = {1, 2, 3, 4, 5};
    bubbleSort(arr);
    assert(arr == expected);

    // Test case 4: Vector with duplicate elements
    arr = {5, 1, 4, 2, 8, 5, 2};
    expected = {1, 2, 2, 4, 5, 5, 8}; // std::sort can verify this
    bubbleSort(arr);
    assert(arr == expected);

    // Test case 5: Vector with mixed positive and negative numbers
    arr = {-5, 1, -4, 0, 2, -8, 5};
    expected = {-8, -5, -4, 0, 1, 2, 5};
    bubbleSort(arr);
    assert(arr == expected);

    // Test case 6: Vector with a single element
    arr = {42};
    expected = {42};
    bubbleSort(arr);
    assert(arr == expected);

    std::cout << "Bubble Sort tests passed!" << std::endl;
}

void testSelectionSort() {
    std::cout << "Testing Selection Sort..." << std::endl;
    std::vector<int> arr, expected;

    arr = {}; expected = {}; selectionSort(arr); assert(arr == expected);
    arr = {1, 2, 3, 4, 5}; expected = {1, 2, 3, 4, 5}; selectionSort(arr); assert(arr == expected);
    arr = {5, 4, 3, 2, 1}; expected = {1, 2, 3, 4, 5}; selectionSort(arr); assert(arr == expected);
    arr = {5, 1, 4, 2, 8, 5, 2}; expected = {1, 2, 2, 4, 5, 5, 8}; selectionSort(arr); assert(arr == expected);
    arr = {-5, 1, -4, 0, 2, -8, 5}; expected = {-8, -5, -4, 0, 1, 2, 5}; selectionSort(arr); assert(arr == expected);
    arr = {42}; expected = {42}; selectionSort(arr); assert(arr == expected);

    std::cout << "Selection Sort tests passed!" << std::endl;
}

void testInsertionSort() {
    std::cout << "Testing Insertion Sort..." << std::endl;
    std::vector<int> arr, expected;

    arr = {}; expected = {}; insertionSort(arr); assert(arr == expected);
    arr = {1, 2, 3, 4, 5}; expected = {1, 2, 3, 4, 5}; insertionSort(arr); assert(arr == expected);
    arr = {5, 4, 3, 2, 1}; expected = {1, 2, 3, 4, 5}; insertionSort(arr); assert(arr == expected);
    arr = {5, 1, 4, 2, 8, 5, 2}; expected = {1, 2, 2, 4, 5, 5, 8}; insertionSort(arr); assert(arr == expected);
    arr = {-5, 1, -4, 0, 2, -8, 5}; expected = {-8, -5, -4, 0, 1, 2, 5}; insertionSort(arr); assert(arr == expected);
    arr = {42}; expected = {42}; insertionSort(arr); assert(arr == expected);

    std::cout << "Insertion Sort tests passed!" << std::endl;
}

void testMergeSort() {
    std::cout << "Testing Merge Sort..." << std::endl;
    std::vector<int> arr, expected;

    arr = {}; expected = {}; mergeSort(arr); assert(arr == expected);
    arr = {1, 2, 3, 4, 5}; expected = {1, 2, 3, 4, 5}; mergeSort(arr); assert(arr == expected);
    arr = {5, 4, 3, 2, 1}; expected = {1, 2, 3, 4, 5}; mergeSort(arr); assert(arr == expected);
    arr = {5, 1, 4, 2, 8, 5, 2}; expected = {1, 2, 2, 4, 5, 5, 8}; mergeSort(arr); assert(arr == expected);
    arr = {-5, 1, -4, 0, 2, -8, 5}; expected = {-8, -5, -4, 0, 1, 2, 5}; mergeSort(arr); assert(arr == expected);
    arr = {42}; expected = {42}; mergeSort(arr); assert(arr == expected);

    std::cout << "Merge Sort tests passed!" << std::endl;
}

void testQuickSort() {
    std::cout << "Testing Quick Sort..." << std::endl;
    std::vector<int> arr, expected;

    arr = {}; expected = {}; quickSort(arr); assert(arr == expected);
    arr = {1, 2, 3, 4, 5}; expected = {1, 2, 3, 4, 5}; quickSort(arr); assert(arr == expected);
    arr = {5, 4, 3, 2, 1}; expected = {1, 2, 3, 4, 5}; quickSort(arr); assert(arr == expected);
    arr = {5, 1, 4, 2, 8, 5, 2}; expected = {1, 2, 2, 4, 5, 5, 8}; quickSort(arr); assert(arr == expected);
    arr = {-5, 1, -4, 0, 2, -8, 5}; expected = {-8, -5, -4, 0, 1, 2, 5}; quickSort(arr); assert(arr == expected);
    arr = {42}; expected = {42}; quickSort(arr); assert(arr == expected);

    std::cout << "Quick Sort tests passed!" << std::endl;
}

void testHeapSort() {
    std::cout << "Testing Heap Sort..." << std::endl;
    std::vector<int> arr, expected;

    arr = {}; expected = {}; heapSort(arr); assert(arr == expected);
    arr = {1, 2, 3, 4, 5}; expected = {1, 2, 3, 4, 5}; heapSort(arr); assert(arr == expected);
    arr = {5, 4, 3, 2, 1}; expected = {1, 2, 3, 4, 5}; heapSort(arr); assert(arr == expected);
    arr = {5, 1, 4, 2, 8, 5, 2}; expected = {1, 2, 2, 4, 5, 5, 8}; heapSort(arr); assert(arr == expected);
    arr = {-5, 1, -4, 0, 2, -8, 5}; expected = {-8, -5, -4, 0, 1, 2, 5}; heapSort(arr); assert(arr == expected);
    arr = {42}; expected = {42}; heapSort(arr); assert(arr == expected);

    std::cout << "Heap Sort tests passed!" << std::endl;
}

int main() {
    testBubbleSort();
    testSelectionSort();
    testInsertionSort();
    testMergeSort();
    testQuickSort();
    testHeapSort();

    std::cout << "\nAll sorting tests completed successfully!" << std::endl;
    return 0;
}

// Dummy implementations removed, as test_sorting.cpp will be linked with hello.cpp (or sorting_algorithms.o)
