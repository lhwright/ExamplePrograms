/**
    CS 111 (Mini-)Project 5: Heaps
    heap.h

    @author <your name goes here>
*/
#ifndef _HEAP_H_
#define _HEAP_H_
#include <vector>

class heap {
    public:
        heap();
        heap(std::vector<int> const &array);
        ~heap();

        size_t size() const;
        int remove();
        void insert(int const value);
        size_t left(size_t index);
        size_t right(size_t index);
        void print();
    private:
        void build();
        void trickle_down(size_t const index);
        void bubble_up(size_t const index);
        std::vector<int> heap_array;
};
#endif //_HEAP_H_
