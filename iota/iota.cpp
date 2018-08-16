#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> v(10);
    std::iota(v.begin(), v.end(), 0);
    return 0;
}
