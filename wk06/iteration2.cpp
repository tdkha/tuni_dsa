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
    int dis = std::distance(lst.begin(), lst.end())/2;
    
    auto it = lst.begin();
    for(int i = 0; i < dis; ++i) {
        std::cout << *it << " ";
        ++it;
        ++it;
    }
    std::cout << std::endl;

}
