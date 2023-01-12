#pragma once

#include "Sorting.hpp"

#include <iostream>

class BubbleSort : public Sorting {
public:
    BubbleSort(void);
    BubbleSort(size_t size);
    ~BubbleSort(void);
    
    void sort(void);
};