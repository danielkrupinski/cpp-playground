#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::copy_n(v.begin(), 5, std::ostream_iterator<int>{ std::cout, " " });
    std::cout << '\n';
    return 0;
}
