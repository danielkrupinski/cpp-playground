#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::fill(v.begin(), v.end(), 7);

    std::copy(v.begin(), v.end(), std::ostream_iterator<int>{ std::cout, " " });
    return 0;
}
