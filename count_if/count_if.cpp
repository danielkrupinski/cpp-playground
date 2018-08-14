#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    const std::vector<int> v{ 1, 2, 1, 138, 1, 0, -1813, -173, -88, 1, 15, 47, 1 };
    std::cout << "odd numbers count: " << std::count_if(v.begin(), v.end(), [](int a) { return a & 1; });
    return 0;
}