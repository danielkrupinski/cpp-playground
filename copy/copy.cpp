#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
    std::vector<int> v1;

    std::copy(v.begin(), v.begin() + 5, std::back_inserter(v1));
    std::cout << "v: ";
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>{ std::cout, " " });
    std::cout << '\n' << "v1: ";
    std::copy(v1.begin(), v1.end(), std::ostream_iterator<int>{ std::cout, " " });
    std::cout << '\n';
    return 0;
}
