#include "sorting_algorithms.h"
#include <iostream>   // For printVector
#include <vector>     // Already in .h but good practice for .cpp if directly used
#include <algorithm>  // For std::swap, std::make_heap, std::sort_heap

// Definition (declaration is in sorting_algorithms.h)
void printVector(const std::vector<int>& arr) {
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

// Definition (declaration is in sorting_algorithms.h)
void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

// Definition (declaration is in sorting_algorithms.h)
void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]);
        }
    }
}

// Definition (declaration is in sorting_algorithms.h)
void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Static helper functions for Merge Sort
static void merge(std::vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; ++i) L[i] = arr[l + i];
    for (int j = 0; j < n2; ++j) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

static void mergeSortHelper(std::vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2; // Avoids overflow for large l, r
        mergeSortHelper(arr, l, m);
        mergeSortHelper(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// Definition (declaration is in sorting_algorithms.h)
void mergeSort(std::vector<int>& arr) {
    if (arr.empty()) return;
    mergeSortHelper(arr, 0, arr.size() - 1);
}

// Static helper functions for Quick Sort
static int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; ++j) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

static void quickSortHelper(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSortHelper(arr, low, pi - 1);
        quickSortHelper(arr, pi + 1, high);
    }
}

// Definition (declaration is in sorting_algorithms.h)
void quickSort(std::vector<int>& arr) {
    if (arr.empty()) return;
    quickSortHelper(arr, 0, arr.size() - 1);
}

// Definition (declaration is in sorting_algorithms.h)
void heapSort(std::vector<int>& arr) {
    if (arr.empty()) return;
    std::make_heap(arr.begin(), arr.end());
    std::sort_heap(arr.begin(), arr.end());
}
