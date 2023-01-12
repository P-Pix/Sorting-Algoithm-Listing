#include "../../include/model/QuickSort.hpp"

QuickSort::QuickSort(void) : Sorting() {
}

QuickSort::QuickSort(size_t size) : Sorting(size) {
}

QuickSort::~QuickSort(void) {
}

void QuickSort::sort(void) {
    std::cout << "Quick Sort" << std::endl;
    size_t size = this->getSize();
    this->resetCount();
}