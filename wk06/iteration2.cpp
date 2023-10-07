/**
 * iteration2.cc
 *
 * Print every second item of a list starting from the first item
 */

/**
 * DO NOT ADD ANY INCLUDES!!
 */

#include "iteration2.hh"
using namespace std;


void printEverySecond(const list<int>& lst)
{
    // ADD YOUR CODE HERE
    auto it = lst.begin();
    while (it != lst.end()) {
        std::cout << *it << " ";
        ++it;
        if (it != lst.end()) {
            ++it;
        }
    }
    std::cout << std::endl;

}
