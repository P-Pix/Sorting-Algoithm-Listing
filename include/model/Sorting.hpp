#pragma once

#include <iostream>
#include <random>
#include <vector>

#define NUMBER_OF_SCHUFFLE_FUNCTION 2

enum SchuffleType {
    ONE_TWO,
    ORDER_GROWING,
};

void schuffleOneTwo(int seed, int *liste, size_t size);
void orderGrowing(int seed, int *liste, size_t size);

class Sorting {
    private:
        std::vector<void (*)(int seed, int *liste, size_t size)> schuffleList;
        size_t size;

    protected:
        int *liste;
        void init(void);

    public:
        Sorting(void);
        Sorting(size_t size);
        ~Sorting(void);

        size_t getSize(void);
        void setSize(size_t size);
        int get(size_t index);
        void schuffle(int seed, int mode);
        
        virtual void sort(void) = 0;

        friend std::ostream& operator<<(std::ostream &os, const Sorting &s);
};
