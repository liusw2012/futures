#include "sorting_algorithms.h" // For sorting function declarations and printVector
#include <iostream>             // For std::cout
#include <vector>               // For std::vector

int main() {
    // std::cout << "Hello, World!" << std::endl; // Original line, commented out

    std::vector<int> arr1 = {64, 34, 25, 12, 22, 11, 90};
    std::cout << "Original array (arr1): ";
    printVector(arr1);
    bubbleSort(arr1);
    std::cout << "Bubble Sorted (arr1): ";
    printVector(arr1);
    std::cout << std::endl;

    std::vector<int> arr2 = {64, 25, 12, 22, 11};
    std::cout << "Original array (arr2): ";
    printVector(arr2);
    selectionSort(arr2);
    std::cout << "Selection Sorted (arr2): ";
    printVector(arr2);
    std::cout << std::endl;

    std::vector<int> arr3 = {12, 11, 13, 5, 6};
    std::cout << "Original array (arr3): ";
    printVector(arr3);
    insertionSort(arr3);
    std::cout << "Insertion Sorted (arr3): ";
    printVector(arr3);
    std::cout << std::endl;

    std::vector<int> arr4 = {12, 11, 13, 5, 6, 7};
    std::cout << "Original array (arr4): ";
    printVector(arr4);
    mergeSort(arr4);
    std::cout << "Merge Sorted (arr4): ";
    printVector(arr4);
    std::cout << std::endl;

    std::vector<int> arr5 = {10, 7, 8, 9, 1, 5};
    std::cout << "Original array (arr5): ";
    printVector(arr5);
    quickSort(arr5);
    std::cout << "Quick Sorted (arr5): ";
    printVector(arr5);
    std::cout << std::endl;

    std::vector<int> arr6 = {12, 11, 13, 5, 6, 7};
    std::cout << "Original array (arr6): ";
    printVector(arr6);
    heapSort(arr6);
    std::cout << "Heap Sorted (arr6): ";
    printVector(arr6);
    std::cout << std::endl;

    // Example with an empty vector
    std::vector<int> arr_empty = {};
    std::cout << "Original array (empty): ";
    printVector(arr_empty);
    bubbleSort(arr_empty); // Or any other sort
    std::cout << "Sorted (empty): ";
    printVector(arr_empty);
    std::cout << std::endl;

    // Example with a single element vector
    std::vector<int> arr_single = {42};
    std::cout << "Original array (single): ";
    printVector(arr_single);
    bubbleSort(arr_single); // Or any other sort
    std::cout << "Sorted (single): ";
    printVector(arr_single);
    std::cout << std::endl;

    return 0;
}
