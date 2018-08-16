#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> v(10);
    std::iota(v.begin(), v.end(), 0);
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>{ std::cout, " " });
    return 0;
}
