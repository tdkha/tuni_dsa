/**
 * iteration4.cc
 *
 * Print all items of a list in a reverse order
 */

/**
 * DO NOT ADD ANY INCLUDES!!
 */

#include "iteration4.hh"
using namespace std;


void printReverse(const list<int>& lst)
{
    // ADD YOUR CODE HERE
    for (auto it = lst.crbegin(); it != lst.crend(); ++it){
        std::cout << *it << " ";
        
    }
    std::cout << endl;
}