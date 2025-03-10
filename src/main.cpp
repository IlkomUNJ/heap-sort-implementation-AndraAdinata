#include "max_heap.h"
#include <iostream>

int main() {
    MaxHeap* PriorityQueue = new MaxHeap();
    if (PriorityQueue->isEmpty()) {
        std::cout << "Benar" << std::endl;
    } else {
        std::cout << "isEmpty function error" << std::endl;
    }

    PriorityQueue->insertItem(4);
    PriorityQueue->insertItem(15);
    PriorityQueue->insertItem(22);
    PriorityQueue->insertItem(40);
    PriorityQueue->insertItem(41);
    std::cout << PriorityQueue->getMax() << std::endl;
    PriorityQueue->extractMax();
    std::cout << PriorityQueue->getMax() << std::endl;
    if (PriorityQueue->isEmpty()) {
        std::cout << "isEmpty function error" << std::endl;
    } else {
        std::cout << "Benar" << std::endl;
    }

    delete PriorityQueue;
    return 0;
}
