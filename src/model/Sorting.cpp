#include "../../include/model/Sorting.hpp"

Sorting::Sorting(void) {
    this->size = 0;
    this->liste = nullptr;
}

Sorting::Sorting(size_t size) {
    this->size = size;
    this->liste = new int[size];
    this->init();
}

Sorting::~Sorting(void) {
    delete[] this->liste;
}

size_t Sorting::getSize(void) const {
    return this->size;
}

int Sorting::get(size_t index) const {
    return this->liste[index];
}

void Sorting::resetCount(void) {
    this->count = 0;
}

unsigned long long Sorting::getCount(void) const {
    return this->count;
}

void Sorting::incrementCount(void) {
    this->count++;
}

void Sorting::setSize(size_t size) {
    this->size = size;
    delete[] this->liste;
    this->liste = new int[size];
    this->init();
}

void Sorting::init(void) {
    if (this->size <= 0) {
        std::cout << "List size = 0" << std::endl;
        return;
    }
    for (size_t i = 0; i < this->size; i++) {
        this->liste[i] = i;
    }
    this->schuffle(std::rand(), -1);
}

void Sorting::schuffle(int seed, int mode) {
    std::cout << "Seed = " << seed << std::endl;
    this->schuffleList[mode](seed, this->liste, this->size);
}

void orderGrowing(int seed, int *liste, size_t size) {
    std::cout << "Order Growing Schuffle with seed = " << seed << std::endl;
    for (size_t i = 0; i < size; i++) {
        liste[i] = i;
    }
}

void schuffleOneTwo(int seed, int *liste, size_t size) {
    std::cout << "Schuffle One Two with seed = " << seed << std::endl;
    if (size <= 1) {
        std::cout << "List size = 0 or 1" << std::endl;
        return;
    }
    if (size % 2 == 0) {
        for (size_t i = 0; i < size - 1; i += 2) {
            int tmp = liste[i];
            liste[i] = liste[i + 1];
            liste[i + 1] = tmp;
        }
        return;
    }
    for (size_t i = 0; i < size - 1; i += 2) {
        int tmp = liste[i];
        liste[i] = liste[i + 1];
        liste[i + 1] = tmp;
    }
}

std::ostream& operator<<(std::ostream &os, const Sorting &s) {
    std::cout << "[";
    size_t size = s.size;
    for (size_t i = 0; i < size; i++) {
        os << s.liste[i];
        if (i + 1 != size) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}