/**
    CS 111 (Mini-)Project 5: Heaps
    heap.cpp

    @author <your name goes here>
*/
#include <cstdlib>
#include <climits>
#include "heap.h"
#include <iostream>
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
	for (size_t i = 1; i < size() + 1; i++){
		trickle_down(i);
	}
}
size_t heap::left(size_t index){
	return (2*index);
}
size_t heap::right(size_t index){
	return (2*index + 1);
}
void heap::trickle_down(size_t const index) {
	size_t child(index);
	if (left(index) < (size())){
		if (heap_array[index]>heap_array[left(index)]){
			child = left(index);
		}
	}
	if (right(index) < (size())){
		if (heap_array[child] > heap_array[right(index)]){
			child = right(index);
		}
	}
	if (child != index) {
		size_t swap_val = heap_array[child];
		heap_array[child] = heap_array[index];
		heap_array[index] = swap_val;
		trickle_down(child);
	}
}
void heap::print(){
	for (size_t i = 1; i < size() + 1; i++){
		cout << heap_array[i];
	}
}
void heap::bubble_up(size_t const index) {
}
