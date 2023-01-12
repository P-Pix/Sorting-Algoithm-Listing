#include "../../include/model/BubbleSort.hpp"

BubbleSort::BubbleSort(void) : Sorting() {
}

BubbleSort::BubbleSort(size_t size) : Sorting(size) {
}

BubbleSort::~BubbleSort(void) {
}

void BubbleSort::sort(void) {
    std::cout << "Bubble Sort" << std::endl;
    size_t size = this->getSize();
    this->resetCount();
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size - 1; j++) {
            if (this->liste[j] > this->liste[j + 1]) {
                int tmp = this->liste[j];
                this->incrementCount();
                this->liste[j] = this->liste[j + 1];
                this->incrementCount();
                this->liste[j + 1] = tmp;
                this->incrementCount();
            }
        }
    }
}