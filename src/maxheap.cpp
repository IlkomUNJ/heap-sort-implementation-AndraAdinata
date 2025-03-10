#include "max_heap.h"
#include <iostream>

void MaxHeap::shiftUp(int i) {
    if (i > _size) return;
    if (i == 1) return;
    if (vect[i] > vect[p(i)]) {
        std::swap(vect[p(i)], vect[i]);
    }
    shiftUp(p(i));
}

void MaxHeap::insertItem(int val) {
    if (_size + 1 >= vect.size()) {
        vect.push_back(0);
    }
    vect[++_size] = val;
    shiftUp(_size);
}

void MaxHeap::shiftDown(int i) {
    if (i > _size) return;

    int swapId = i;

    if (l(i) <= _size && vect[i] < vect[l(i)]) {
        swapId = l(i);
    }

    if (r(i) <= _size && vect[swapId] < vect[r(i)]) {
        swapId = r(i);
    }

    if (swapId != i) {
        std::swap(vect[i], vect[swapId]);
        shiftDown(swapId);
    }
}

int MaxHeap::extractMax() {
    int maxNum = vect[1];
    std::swap(vect[1], vect[_size--]);
    shiftDown(1);
    return maxNum;
}
