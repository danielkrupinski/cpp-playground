#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::cout << "distance between v.begin() and v.end(): " << std::distance(v.begin(), v.end()) << '\n';
    return 0;
}
