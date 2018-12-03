/**
    CS 111 (Mini-)Project 5: Heaps
    heap.cpp

    @author <your name goes here>
*/
#include "heap.h"

using namespace std;

heap::heap() {
}

heap::heap(vector<int> const &array) {
    heap_array = array;
    build();
}

heap::~heap() {
}

size_t heap::size() const {
    return heap_array.size();
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
