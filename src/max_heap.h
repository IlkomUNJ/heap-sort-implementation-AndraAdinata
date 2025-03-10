#ifndef MAX_HEAP_H
#define MAX_HEAP_H

#include <vector>

class MaxHeap {
    private:
        int _size{};
        std::vector<int> vect = {-1};

        int p(int i) {return i >> 1;} // i / 2
        int l(int i) {return i << 1;} // i * 2
        int r(int i) {return (i << 1) + 1;} // i * 2 + 1
        
    public:
        bool isEmpty() const {return _size == 0;}
        int getMax() const {return vect[1];}
        void insertItem(int val);
        void shiftUp(int i);
        int extractMax();
        void shiftDown(int i);        
};

#endif
