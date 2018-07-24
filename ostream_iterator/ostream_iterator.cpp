#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v{ 1, 2, 3, 123, 234, 345 };
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>{ std::cout, "\n" });
    return 0;
}
