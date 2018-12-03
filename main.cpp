/**
    CS 111 (Mini-)Project 5: Heaps
    main.cpp

    @author <your name goes here>
*/
#include <iostream>
#include "heap.h"

using namespace std;

int main() {
    vector<int> starting_heap = {3,1,4,1,5,9};
    heap my_heap(starting_heap);

    // prints out 1 1 3 4 5 9
    while (my_heap.size() != 0) {
        cout << my_heap.remove() << " ";
    }
    cout << endl;
    return 0;
}
