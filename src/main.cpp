#include "../include/model/Sorting.hpp"
#include "../include/model/BubbleSort.hpp"

#include <iostream>

int main(int argc, char* argv[]) {
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
    }
    BubbleSort s = BubbleSort(100);
    std::cout << s << std::endl;
    s.schuffle(std::rand(), SchuffleType::ONE_TWO);
    std::cout << s << std::endl;
    return EXIT_SUCCESS;
}