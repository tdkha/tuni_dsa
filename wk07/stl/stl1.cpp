#include <iterator>
#include <vector>
#include <algorithm>

#include "test.hh"

using namespace std;

/**
 * @brief sort a given vector to an ascending order
 *
 * @param v vector to be sorted
 * @return int EXIT_SUCCESS if everything went OK, EXIT_FAILURE otherwise
 */
int sortAsc(std::vector<int> &v)
{
    try
    {
        std::sort(v.begin(), v.end(), [](int a, int b)
                  { return a < b; });
        return EXIT_SUCCESS;
    }
    catch (...)
    {
        return EXIT_FAILURE;
    }
}
