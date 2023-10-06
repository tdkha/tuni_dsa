/**
 * iteration3.cc
 *
 * Print beginning half of a list
 */

/**
 * DO NOT ADD ANY INCLUDES!!
 */

#include "iteration3.hh"
using namespace std;


void printHalf(const list<int>& lst)
{
    // ADD YOUR CODE HERE
    int size = lst.size();
    int half = size / 2;
    
    auto it = lst.begin();
    for(int i = 0; i < half; ++i) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
}