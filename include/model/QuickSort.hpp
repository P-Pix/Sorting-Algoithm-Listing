#pragma once

#include "Sorting.hpp"

#include <iostream>

class QuickSort : public Sorting {
public:
    QuickSort(void);
    QuickSort(size_t size);
    ~QuickSort(void);
    
    void sort(void);
};