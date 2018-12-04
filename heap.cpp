/**
    CS 111 (Mini-)Project 5: Heaps
    heap.cpp

    @author <your name goes here>
*/
#include <climits>
#include "heap.h"

using namespace std;

heap::heap() {
    heap_array.push_back(INT_MAX);
}

heap::heap(vector<int> const &array) {
    heap_array.push_back(INT_MAX);
    heap_array.insert(heap_array.end(), array.begin(), array.end());
    build();
}

heap::~heap() {
}

size_t heap::size() const {
    return heap_array.size() - 1;
}

int heap::remove() {
    return -1;
}

void heap::insert(int const value) {
}

void heap::build() {
}

void heap::trickle_down(size_t const index) {
}

void heap::bubble_up(size_t const index) {
}
